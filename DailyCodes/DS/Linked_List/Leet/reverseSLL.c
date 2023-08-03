/*	Program 2 : Reverse SLL
 *
 *	Input LL : |10|->|20|->|30|->|40|->|50|->|60|
 *
 *	Ouput LL : |60|->|50|->|40|->|30|->|20|->|10|
*/

#include<stdio.h>
#include<stdlib.h>

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

int addNode(){

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

node* reverse(){

	if(head == NULL || head->next == NULL){

		return head;
	}else{
		
		node *prev = NULL;
		node *curr = head;
		node *next = NULL;

		while(curr != NULL){
			
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}

		head = prev;

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
	
	int nodeCount;
	printf("Enter NodeCount\n");
	scanf("%d", &nodeCount);

	for(int i = 1; i <= nodeCount; i++){
	
		addNode();
	}
	
	printLL();

	reverse();

	printLL();
}
