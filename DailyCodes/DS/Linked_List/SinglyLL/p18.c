/*	PRogram 18 : print the minimum integer data from above code.
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

void maxData(){

	demo *temp = head;

	int max = temp->data;

	while(temp != NULL){
	
		if(temp->data > max){
		
			max = temp->data;
		}

		temp = temp->next;
	}

	printf("Maximum Data is : %d\n", max);
}

void minData(){

	demo *temp = head;

	int min = temp->data;

	while(temp != NULL){
	
		if(temp->data < min){
		
			min = temp->data;
		}

		temp = temp->next;
	}

	printf("Minimum Data is : %d\n", min);
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

	maxData();

	minData();
}
