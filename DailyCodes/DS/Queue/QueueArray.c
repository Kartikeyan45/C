/*	PRogram 1 :
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

// 1 - Queue using Array

#include<stdio.h>

int size = 0;
int front = -1, rear = -1;
int flag = 0;

int enqueue(int arr[]){

	if(rear == size - 1){
	
		return -1;
	}else{
	
		if(front == -1){
			
			front++;
		}
	}

	rear++;

	printf("Enter Data\n");
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
		}

		front++;

		return val;
	}
}

int ffront(int arr[]){

	if(front == -1){
		
		return -1;
	}else{
	
		flag = 1;

		return arr[front];
	}
}

int printQueue(int arr[]){

	if(front == -1){
	
		return -1;
	}else{
		
		for(int i = front; i <= rear; i++){
		
			printf("%d", arr[i]);
		}

		printf("\n");
	}
}

void main(){

	printf("Enter Array Size\n");
	scanf("%d", &size);

	int arr[size];

	char choice;

	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Ffront\n");
		printf("4.PrintStack\n");

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
		printf("Do u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'Y' || choice == 'y');
}
