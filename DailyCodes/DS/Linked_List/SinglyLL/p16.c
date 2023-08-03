/*	PRogram 16 : print the addition of the first 
 *	             and last node data from above code..
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

	int data;

	struct Demo *next;
}demo;

demo *head = NULL;

void addNodes(){

	demo *newNode = (demo*)malloc(sizeof(demo));

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

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

void addition(){

	demo *temp = head;

	int add = 0;

	add = temp->data;

	while(temp->next != NULL){
		
		temp = temp->next;
	}

	add = add + temp->data;

	printf("Addition is first and last Node is : %d\n", add);
}

void printLL(){

	demo *temp = head;
	
	int add = 0;

	while(temp != NULL){
	
		printf("|Data is : %d ->|", temp->data);
			
		add = add + temp->data;

		temp = temp->next;
	}

	printf("Addition of Nodes is : %d\n", add);
}

void main(){
	
	int nodes;
	printf("Enter Number of Nodes\n");
	scanf("%d", &nodes);

	for(int i = 0; i < nodes; i++){
	
		addNodes();
	}

	printLL();

	addition();
}
