/*	Program 2 :
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;
}No;

void main(){

	No *head = NULL;

	No *newNode = (No*)malloc(sizeof(No));

	newNode->data = 10;
	newNode->next = NULL;

	head = newNode;		//connecting first node

	newNode = (No*)malloc(sizeof(No));

	newNode->data = 20;
	newNode->next = NULL;

	head->next = newNode;	//connecting second node

	newNode = (No*)malloc(sizeof(No));

	newNode->data = 30;
	newNode->next = NULL;

	head->next->next = newNode;	//connecting third node
	
	No *temp = head;
	
	int count = 0;

	while(temp != NULL){
	
		printf("%d ", temp->data);
		temp = temp->next;
		count++;
	}
	printf("\n");
	printf("No of Nodes are :%d\n", count);
}
