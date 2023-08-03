/*	
 *	Program : Priority Queue Using Linked List
*/	

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	
	int data;
	int priority;
	struct Node *next;
}node;

int flag = 0;

node *head = NULL;

node *createNode(){
	
	node *newNode = (node*)malloc(sizeof(node));	

	printf("Enter Data\n");
	scanf("%d", &newNode->data);
	
	printf("Enter Priority\n");
	scanf("%d", &newNode->priority);

	newNode->next = NULL;

	return newNode;
}

int enqueue(){
	
	node *newNode = createNode();

	if(head == NULL){

		head = newNode;

	}else if(newNode->priority < head->priority){
	
		newNode->next = head;
		head = newNode;
	}else{
		
		node *temp = head;

		if(temp->next != NULL && temp->next->priority < newNode->priority){
		
			temp = temp->next;
		}
		
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

int dequeue(){

	if(head == NULL){
	
		flag = 0;

		return -1;
	}else{

		int ret = head->data;
		
		flag = 1;

		if(head->next == NULL){

			free(head);
			head = NULL;
		}else{

			node *temp = head;

			head = head->next;

			free(temp);
		}

		return ret;
	}
}

int ffront(){

	if(head == NULL){
		
		flag = 0;
		return -1;
	}else{
	
		int val = head->data;

		flag = 1;

		return val;
	}
}

int printQueue(){

	if(head == NULL){

		flag = 0;
		return -1;
	}else{
	
		node *temp = head;

		while(temp->next != NULL){
		
			printf("|%d|->", temp->data);
			printf("|%d|->", temp->priority);

			temp = temp->next;
		}

		printf("|%d|", temp->data);
		printf("|%d|", temp->priority);
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
			default:
				printf("Enter Correct Choice\n");
		}
		
		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);
	
	}while(choice == 'Y' || choice == 'y');
}
