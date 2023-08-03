
//	Find Out Middle Node of LL

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

int middle(){
	
	node *slow = head;
	node *fast = head;
	
	if(head == NULL){
		
		return -1;
	}

	while(fast != NULL && fast->next != NULL){
		
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow->data;
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
		printf("3.middle\n");

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
				int val = middle();
				printf("%d\n", val);
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
