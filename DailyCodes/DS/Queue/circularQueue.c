/*	PRogram 4 :
 *
 *	Topic : Queue
 *
 *	Types :1] Linear Queue
 *	       2] Circular Queue
 *	       3] Priority Queue
 *	       4] Deque
 *
 *	Operations : 1] Enqueue
 *		     2] Dequeue
 *		     3] Front
 *		     4] PrintQueue
*/	       

// 2 - Circular Queue

#include<stdio.h>

int size = 0;
int front = -1, rear = -1;
int flag = 0;

int enqueue(int arr[]){
	

	if(front == -1){
	
		front++;

	}else if((rear == size-1 && front == 0) || (rear == front - 1)){

		return -1;
	}else{
	
		if(rear == size - 1 && front != 0){
		
			rear = -1;
		}
	}
	
	rear++;
	printf("enter data\n");
	scanf("%d", &arr[rear]);

	return 0;
}

int dequeue(int arr[]){

	if(rear == -1){
		
		flag = 0;
		return -1;
	}else{
	
		flag = 1;

		int val = arr[front];

		if(front == rear){
			
			front = -1;
			rear = -1;
		}else{
		
			if(front == size -1){
			
				front = -1;
			}

			front++;
		}

		return val;
	}
}

int ffront(int arr[]){

	if(front == -1){
		
		flag = 0;
		return -1;
	}else{

		flag = 1;
		return arr[front];
	}
}

int printQueue(int arr[]){
	
	if(front == -1){
	
		return -1;

	}else if(front < rear){
	
		for(int i = front; i <= rear; i++){
		
			printf("%d", arr[i]);
		}
	}else{
	
		for(int i = front; i <= size-1; i++){
		
			for(int i = 0; i <= rear; i++){
			
				printf("%d", arr[i]);
			}
		}
	}
}

void main(){
	
	printf("Enter Queue Size\n");
	scanf("%d", &size);

	int arr[size];

	char choice;

	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Ffront\n");
		printf("4.PrintQueue\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				{
					int ret = enqueue(arr);
					
					if(ret == -1){
						
						printf("Queue OverFlow\n");
					}
				}
				break;
			case 2:
				{
					int ret = dequeue(arr);

					if(ret == -1){
						
						printf("Queue UnderFlow\n");
					}else{
					
						printf("Popped %d\n", ret);
					}
				}
				break;
			case 3:
				{
					int ret = ffront(arr);

					if(flag == 0){
					
						printf("Queue Empty\n");
					}else{
					
						printf("Front is :%d\n", ret);
					}
					
				}
				break;
			case 4:
				{
					int ret = printQueue(arr);

					if(ret == -1){
					
						printf("Queue Empty\n");
					}
				}

				break;
			default:
				printf("Enter Correct Choice\n");
		}
		
		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);
	
	}while(choice == 'Y' || choice == 'y');
}
