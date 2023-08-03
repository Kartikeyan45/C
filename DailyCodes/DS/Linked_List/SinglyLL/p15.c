/*	PRogram 15 : WAP a demo structure consisting of integer data.
 *	 	     Take the number of nodes from the user and print 
 *	 	     the addition of integer data.
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
}
