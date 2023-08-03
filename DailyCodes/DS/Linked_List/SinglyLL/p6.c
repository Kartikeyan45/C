/*	PRogram 6:
 *
 *	Applicable to only one node
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Student{

	int id;
	float ht;
	struct Student *next;
}stud;

stud *head = NULL;

void addNodes(){

	stud *newNode = (stud*)malloc(sizeof(stud));

	newNode->id = 1;
	newNode->ht = 5.5;
	newNode->next = NULL;

	head = newNode;
}

void printLL(){

	stud *temp = head;

	while(temp != NULL){
	
		printf("%d ", temp->id);
		printf("%f ", temp->ht);
		printf("\n");

		temp = temp->next;
	}
}

void main(){

	addNodes();
	printLL();
}
