/*	Program 8 :
 *
 *	Proper Template
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Movie{

	char mName[20];
	float imdb;
	struct Movie *next;
}Mov;

Mov *head = NULL;

void addNode(){

	Mov *newNode = (Mov *)malloc(sizeof(Mov));

	printf("Enter Movie Name\n");
//	gets(newNode->mName, 15, stdin);
	scanf("%s", newNode->mName);

	printf("Enter Movie Rating\n");
	scanf("%f", &newNode->imdb);
	
	getchar();

	newNode->next = NULL;

	if(head == NULL){
	
		head = newNode;
	}else{
	
		Mov *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printLL(){

	Mov *temp = head;

	while(temp != NULL){
	
		printf("|Movie Name :%s ->", temp->mName);
		printf("Movie Rating :%f|", temp->imdb);

		temp = temp->next;
	}
	printf("\n");
}

void main(){

	addNode();
	addNode();
	addNode();
	printLL();
}
