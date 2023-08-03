/*	Program 20 : Write a real time example for a linked list
 *		     and print its data. Take 5 nodes from the user.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Fifa{

	int players;
	char tname[20];

	struct Fifa *next;
}fifa;

fifa *head = NULL;

fifa *createNode(){

	fifa *newNode = (fifa*)malloc(sizeof(fifa));

	printf("Enter No of Players\n");
	scanf("%d", &newNode->players);

	printf("Enter Team Name\n");

	getchar();

	int ch;
	int i = 0;

	while((ch = getchar()) != '\n'){
	
		(*newNode).tname[i] = ch;
		i++;
	} 

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	fifa *newNode = createNode();

	if(head == NULL){
		
		head = newNode;
	}else{
	
		fifa *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}

}

void printLL(){

	fifa *temp = head;

	while(temp != NULL){
	
		printf("|No of Players are : %d ->", temp->players);
		printf("Team Name is : %s |", temp->tname);

		temp = temp->next;
	}
	printf("\n");
}

void main(){

	int NodeCount;
	printf("Enter Node Count\n");
	scanf("%d", &NodeCount);

	for(int i = 0; i < NodeCount; i++){
	
		addNode();
	}

	printLL();
}
