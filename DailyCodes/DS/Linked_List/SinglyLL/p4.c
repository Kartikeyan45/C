/*	Program 4 :
 *
 *	// Wrong Approach
 *	
 *	//Important Question
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Student{

	int id;
	float ht;
	struct Student *next;
}stud;

void addNodes(stud *head){

	stud *newNode = (stud *)malloc(sizeof(stud));

	newNode->id = 1;
	newNode->ht = 5.5;
	newNode->next = NULL;

	head = newNode;
}

void printLL(stud *head){

	stud *temp = head;

	while(temp != NULL){
	
		printf("%d ", temp->id);
		printf("%f ", temp->ht);

		temp = temp->next;
	}
}

void main(){

	stud *head = NULL;

	addNodes(head);
	printLL(head);
}
