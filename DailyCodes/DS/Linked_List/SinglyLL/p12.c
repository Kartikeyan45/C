/*	PRogram 12 : WAP for the LinkedList of States in India conisting its name, population, Budget
 *	 	     and literacy.Connect 4 states in the LinkedList and print their data.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct States{

	char sName[20];
	int population;
	float budget;
	float literacy;

	struct States *next;
}state;

state *head = NULL;

void addNodes(){

	state *newNode = (state*)malloc(sizeof(state));

	printf("Enter State Name\n");
	scanf("%s", newNode->sName);

	printf("Enter State Population\n");
	scanf("%d", &newNode->population);

	printf("Enter State Budget\n");
	scanf("%f", &newNode->budget);

	printf("Enter State Literacy\n");
	scanf("%f", &newNode->literacy);

	newNode->next = NULL;

	if(head == NULL){
	
		head = newNode;
	}else{
	
		state *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printLL(){

	state *temp = head;

	while(temp != NULL){
	
		printf("|State Name is : %s ->", temp->sName);
		printf("State Population is :%d ->", temp->population);
		printf("State Budget is : %f ->", temp->budget);
		printf("State Literacy is : %f|", temp->literacy);

		temp = temp->next;
	}

	printf("\n");
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
