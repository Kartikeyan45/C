/*	PRogram 2 :
 *
 *	5] addFirst
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

void countNodes(){

	demo *temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	printf("Count is :%d\n", count);
}

void addFirst(){

	demo *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
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
	printf("Enter Nodes\n");
	scanf("%d", &nodeCount);

	for(int i = 1; i <= nodeCount; i++){
	
		addNode();
	}

	printLL();

	countNodes();

	addFirst();

	printLL();
}
