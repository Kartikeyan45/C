
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

node *inplaceRev(){
	
	if(head == NULL){
		
		return NULL;
	}else{
		
		if(head->next == NULL){
			
			return head;
		}else{
			
			node *curr = head;
			node *prev = NULL;
			node *next;

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
	
	int nodes;
	printf("Enter No of nodes\n");
	scanf("%d", &nodes);

	for(int i = 1; i <= nodes; i++){
		
		addNode();
	}

	printLL();

	node *newNode = inplaceRev();

	printLL();
}
