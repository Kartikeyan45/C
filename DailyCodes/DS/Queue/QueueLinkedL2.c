/*	PRogram 3 :
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

// 2 - Queue using Linked List Without Using Size

#include<stdio.h>
#include<stdlib.h>

int flag = 0;

typedef struct Node{
	
	int data;
	struct Node *next;
}node;

node *front = NULL;
node *rear = NULL;

node *createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));
	
	if(newNode == NULL){					// Zar User Kadun Size nahi ghetla tar, LL kelyane "heap" section madhe memory bhetto
								// ani tyacha pan ek "limitation ahe", jevha memory full hoto tevha "newNode" madhe "NULL"
		printf("Memory Full(Heap)");			// yeil tevha memory full jali asel.
		exit(0);
	}	

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void enqueue(){
	
	node *newNode = createNode();

	if(front == NULL){
	
		front = newNode;
		rear = newNode;
	}else{

		rear->next = newNode;
		rear = newNode;
	}
}

int dequeue(){

	if(front == NULL){
	
		flag = 0;

		return -1;
	}else{

		int ret = front->data;
		
		flag = 1;

		if(front->next == NULL){

			free(front);
			front = NULL;
		}else{

			node *temp = front;

			front = front->next;

			free(temp);
		}

		return ret;
	}
}

int ffront(){

	if(front == NULL){
		
		flag = 0;
		return -1;
	}else{
	
		int val = front->data;

		flag = 1;

		return val;
	}
}

int printQueue(){

	if(front == NULL){
	
		return -1;
	}else{
		
		node *temp = front;

		while(temp != NULL){
		
			printf("%d ", temp->data);

			temp = temp->next;
		}

		printf("\n");
	}
}

void main(){

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
				enqueue();
				break;
			case 2:
				{
					int ret = dequeue();

					if(ret == -1){
						
						printf("Queue UnderFlow\n");
					}else{
					
						printf("Popped %d\n", ret);
					}
				}
				break;
			case 3:
				{
					int ret = ffront();

					if(flag == 0){
					
						printf("Queue Empty\n");
					}else{
					
						printf("Front is :%d\n", ret);
					}
					
				}
				break;
			case 4:
				{
					int ret = printQueue();

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
