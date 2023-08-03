/*	PRogram 2 :
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

// 2 - Queue using Linked List

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int countNodes = 0;
int flag = 0;

typedef struct Node{
	
	int data;
	struct Node *next;
}node;

node *head = NULL;

int eleCount(){

	int count = 0;

	node *temp = head;

	while(temp != NULL){
	
		count++;

		temp = temp->next;
	}

	return count;
}

bool isFull(){

	if(eleCount() == countNodes){
	
		return true;
	}else{
	
		return false;
	}
}

node *createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	
	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
		node *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

int enqueue(){

	if(isFull()){
	
		return -1;
	}else{
		addNode();

		return 0;
	}
}

bool isEmpty(){

	if(head == NULL){
	
		return true;
	}else{
	
		return false;
	}
}

int deleteFirst(){

	if(isEmpty()){
	
		flag = 0;

		return -1;
	}else{
		int ret;

		if(eleCount() == 1){
			
			ret = head->data;

			free(head);
			head = NULL;
		}else{
		
			ret = head->data;

			node *temp = head;

			head = head->next;

			free(temp);
		}

		return ret;
	}
}

int dequeue(){

	if(isEmpty()){
	
		flag = 0;

		return -1;
	}else{
	
		flag = 1;

		int val = deleteFirst();

		return val;
	}
}

int printLL(){

	int ret;

	if(head->next == NULL){
	
		ret = head->data;
	}else{
	
		ret = head->data;
	}

	return ret;
}

int ffront(){

	if(isEmpty()){
		
		flag = 0;
		return -1;
	}else{
	
		int val = printLL();

		flag = 1;

		return val;
	}
}

int printQueue(){

	if(head == NULL){
	
		return -1;
	}else{
		
		node *temp = head;

		while(temp != NULL){
		
			printf("%d ", temp->data);

			temp = temp->next;
		}

		printf("\n");
	}
}

void main(){

	printf("Enter Queue Node Count\n");
	scanf("%d", &countNodes);

	char choice;

	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Ffront\n");
		printf("4.PrintStack\n");
		printf("5.isFull\n");
		printf("6.isEmpty\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				{
					int ret = enqueue();

					if(ret == -1){
						
						printf("Queue OverFlow\n");
					}
				}
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
			case 5:
				{
					bool ret = isFull();

					if(ret == true){
					
						printf("Queue is Full\n");
					}else{
					
						printf("Queue is not Full\n");
					}
				}
				break;
			case 6:
				{
					bool ret = isEmpty();

					if(ret == true){
					
						printf("Queue is Empty\n");
					}else{
					
						printf("Queue is not Empty\n");
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
