/*	Program 7 :
 *
 *	user Input
 *
 *	Only One Node can be created
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

	Mov *newNode = (Mov*)malloc(sizeof(Mov));

	printf("Enter Movie Name\n");
//	fgets(newNode->mName, 15, stdin);
	scanf("%s", newNode->mName);

	printf("Enter Movie rating\n");
	scanf("%f", &newNode->imdb);

	newNode->next = NULL;

	head = newNode;
}

void printLL(){

	Mov *temp = head;

	while(temp != NULL){
	
		printf("|Movie Name :%s-> ", temp->mName);
		printf("Movie Rating :%f|", temp->imdb);

		temp = temp->next;
	}
	printf("\n");
}

void main(){

	addNode();
	printLL();
}

/*	String input can be taken in 3 ways :
 *
 *		1 - scanf(); but using scanf after giving space, output is not shown
 *			     eg : kartik Shah, only Kartik is shown
 *		
 *		2 - gets();  but using gets, suppose thare is gets, scanf, scanf in program
 *			     after using gets, no other input is taken
 *
 *		3 - fgets(); it is the proper way
*/
