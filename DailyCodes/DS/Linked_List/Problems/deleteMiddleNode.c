
//	Find Out Middle Node of LL and delete it

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

node* deleteMiddle(){
	
	node *slow = head;
	node *fast = head;

	node *prev;
	
	if(head == NULL || head->next == NULL){
		
		return head;
	}else{

		while(fast != NULL && fast->next != NULL){
			
			fast = fast->next->next;
			prev = slow;
			slow = slow->next;
		}

		prev->next = slow->next;
		free(slow);
		slow->next = NULL;

		return head;
	}
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
				
				deleteMiddle();
				break;

			default:
				printf("Do u want to continue\n");
		}

		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'Y' || choice == 'y');
}
