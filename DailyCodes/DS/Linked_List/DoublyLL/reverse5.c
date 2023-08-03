/*	Program 5 :
 *
 *	Reverse Linked List :
 *		
 *		1]Using Doubly Linked List
 *
 *			1] Using Temp Pointer
 *			2] Using Swap
 *			3] using inplace reverse
 *
 *		2]Using Singly Linked List
*/

/*	1] Using SinglyLL Linked List
 *		1] Using Inplace Reverse
 *		
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

	int data;
	struct Demo *next;
}demo;

demo *head = NULL;

demo *createNode(){
	
	demo *newNode = (demo*)malloc(sizeof(demo));

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	demo *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		demo *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

int countNodes(){

	demo *temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	return count;
}

void inPlace(){
	
	demo *temp1 = NULL;
	demo *temp2 = NULL;

	while(head != NULL){
		
		temp1 = head;
	}
}

void printLL(){

	demo *temp = head;

	while(temp->next != NULL){
	
		printf("|%d|->", temp->data);
		temp = temp->next;
	}

	printf("|%d|\n", temp->data);
}

void main(){

	int nodeCount;
	printf("Enter Node Count\n");
	scanf("%d", &nodeCount);

	for(int i = 1; i <= nodeCount; i++){
	
		addNode();
	}

	printLL();

	inPlace();
	
	printf("\n");
	printLL();
}
