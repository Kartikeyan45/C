/*	Program 1:
*/

#include<stdio.h>
#include<stdlib.h>

struct Node{

	int data;
	struct Node *next;
};

void main(){

	struct Node *head = NULL;

	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = 10;
	newNode->next = NULL;

	head = newNode;		//connecting first node

	newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = 20;
	newNode->next = NULL;

	head->next = newNode;	//connecting second node

	newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = 30;
	newNode->next = NULL;

	head->next->next = newNode;	//connecting third node

	struct Node *temp = head;

	while(temp != NULL){
	
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
