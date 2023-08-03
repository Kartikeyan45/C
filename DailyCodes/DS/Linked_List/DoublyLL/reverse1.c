/*	Program 1 :
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

/*	1] Using deoubly Linked List
 *		1] USing temp pointer
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{
	
	struct Demo *prev;
	int data;
	struct Demo *next;
}demo;

demo *head = NULL;

demo *createNode(){
	
	demo *newNode = (demo*)malloc(sizeof(demo));

	newNode->prev = NULL;

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

		newNode->prev = temp;	
	}
}

void reverse(){

	demo *temp = head;

	while(temp->next != NULL){	//temp la last node paryant firavtoy 
	
		temp = temp->next;
	}

	while(temp != NULL){		//jo paryant temp NULL hot nahi toh paryant data print kar
	
		printf("|%d|", temp->data);

		temp = temp->prev;
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

	reverse();
	
	printf("\n");
	printLL();
}
