/*	Program 8 : Remove Linked LIst Elements
 *	
 *	Input LL : |10|->|10|->|20|->|10|->|30|->|10|
 *
 *	Input Val = 10
 *
 *	Ouput LL : |20|->|30|
 *
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{

	int data;
	struct Node *next;
}node;

node *createNode(){

	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

int addNode(node *head){

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

	return 0;
}

node *removeElements(node *head ,int val){
	
	if(head == NULL){
		return NULL;
	}else if(head->data == val){
		head = removeElements(val);
	}else{
		head->next = removeElements(val);
	}

	return head;
}

int printLL(node *head){

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
	
	node *head = NULL;

	char choice;	

	do{
	
		printf("1.addNode\n");
		printf("2.printLL\n");
		printf("3.removeElements\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				head = addNode();
				break;
			case 2:
				head = printLL();
				break;
			case 3:
				{
					int val;
					printf("Enter Value\n");
					scanf("%d", &val);		
					
					head = removeElements(head, val);
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
