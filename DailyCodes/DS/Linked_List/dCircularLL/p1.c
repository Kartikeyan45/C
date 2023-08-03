/*	Program 1 :
 *
 *	1 - createNode, addNode, printLL
*/	

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	struct Node *prev;

	int data;

	struct Node *next;
}node;

node *head = NULL;

node *createNode(){

	node *newNode = (node*)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;

		head->prev = head;
		head->next = head;
	}else{
	
/*		node *temp = head;

		while(temp->next != head){
		
			temp = temp->next;
		}

		temp->next = newNode;
		newNode->prev = temp;
		newNode->next = head;
		head->prev = newNode;

*/		
		head->prev->next = newNode;		// without using temp
		newNode->prev = head->prev;
		newNode->next = head;
		head->prev = newNode;		
	}
}

int printLL(){

	if(head == NULL){
		
		printf("LL is empty\n");
		return -1;
	}else{
	
		node *temp = head;

		while(temp->next != head){
		
			printf("|%d|->", temp->data);

			temp = temp->next;
		}

		printf("|%d|\n", temp->data);
	}

	return 0;
}

void main(){

	int nodeCount;
	printf("Enter Node count\n");
	scanf("%d", &nodeCount);

	for(int i = 1; i <= nodeCount; i++){
	
		addNode();
	}

	printLL();
}
