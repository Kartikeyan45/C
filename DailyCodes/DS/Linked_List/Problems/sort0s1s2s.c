
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

void sort0s1s2s(){
	
	int zero = 0, one = 0, two = 0;

	node *temp = head;

	while(temp != NULL){
		
		if(temp->data == 0){
			
			zero++;
		}else if(temp->data == 1){
			
			one++;
		}else{
			
			two++;
		}

		temp = temp->next;
	}

	temp = head;

	while(temp != NULL){
		
		if(zero != 0){
			
			temp->data = 0;
			zero--;

		}else if(one != 0){
			
			temp->data = 1;
			one--;

		}else{
			
			temp->data = 2;
			two--;
		}

		temp = temp->next;
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

	sort0s1s2s();

	printLL();
}
