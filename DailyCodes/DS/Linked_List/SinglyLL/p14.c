/*	PRogram 14 : WAP to count the number of festival nodes in
 *	 	     the above program.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Festivals{

	char fName[20];
	int fMonth;

	struct Festivals *next;
}fest;

fest *head = NULL;

void addNodes(){

	fest *newNode = (fest*)malloc(sizeof(fest));

	printf("Enter Festival Name\n");
	scanf("%s", newNode->fName);

	printf("Enter Festival Month\n");
	scanf("%d", &newNode->fMonth);
	
	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}else{
	
		fest *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void countNodes(){

	fest *temp = head;
	
	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	printf("Count is : %d\n", count);
}

void printLL(){

	fest *temp = head;

	while(temp != NULL){
	
		printf("|Festival Name : %s -> ", temp->fName);
		printf("Festival Month : %d |", temp->fMonth);

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

	countNodes();
}
