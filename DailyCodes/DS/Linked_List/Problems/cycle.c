
//	Prog : Detect if there is Cycle in LL

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{
	
	int data;
	struct Node *next;
}node;

node *head = NULL;

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

bool cycle(){
	
	if(head == NULL){
		
		return true;
	}

	node *temp = head->next;

	while(temp != NULL && temp != head){
		
		temp = temp->next;
	}

	if(temp == head){
		
		return true;
	}

	return false;
}

int printLL(){
	
	if(head == NULL){
		
		printf("LL is empty\n");
		return -1;
	}else{
		
		node *temp = head;

		while(temp->next != NULL){
			
			printf("|%d|->", temp->data);

			temp = temp->next;
		}

		printf("|%d|\n", temp->data);
	}
}

void main(){
	
	char choice;

	do{
		
		printf("1.addNode\n");
		printf("2.printLL\n");
		printf("3.cycle\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
			
			case 1:
				addNode();
				break;
			case 2:
				printLL();
				break;
			case 3:
				{
				bool val = cycle();

				if(val == true){
					printf("There is cycle in LL\n");
				}else{
					
					printf("No cycle\n");
				}
				}
				break;

			default:
				printf("Do u want to continue\n");
		}

		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'Y' || choice == 'y');
}
