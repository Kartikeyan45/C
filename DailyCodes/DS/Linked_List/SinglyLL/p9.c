/*	PRogram 9 :
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Batsman{

	int jerNo;
	char bName[20];
	float avg;
	struct Batsman *next;
}Bat;

Bat *head = NULL;

void addNode(){

	Bat *newNode = (Bat*)malloc(sizeof(Bat));

	printf("Enter Batsman Jersey No\n");
	scanf("%d", &newNode->jerNo);

	printf("Enter Batsman Name\n");
	scanf("%s", newNode->bName);

	printf("ENter Batsman Average\n");
	scanf("%f", &newNode->avg);

	newNode->next = NULL;

	if(head == NULL){
	
		head = newNode;
	}else{
	
		Bat *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printLL(){

	Bat *temp = head;

	while(temp != NULL){
	
		printf("|Enter Batsman Jersey No:%d ->", temp->jerNo);
		printf("Enter Batsman Name:%s", temp->bName);
		printf("Enter Batsman Average:%f", temp->avg);

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
