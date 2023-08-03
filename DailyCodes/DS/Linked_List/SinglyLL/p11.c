/*	PRogram 10 : WAP for the LinkedList of Malls conisting its name, number of shops
 *	 	     and revenue.Connect 3 malls in the LinkedList and print their data.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Malls{

	char mName[20];
	int noOfShops;
	float revenue;

	struct Malls *next;
}mall;

mall *head = NULL;

void addNodes(){

	mall *newNode = (mall*)malloc(sizeof(mall));

	printf("Enter Mall Name\n");
	scanf("%s", newNode->mName);

	printf("Enter Number of Shops\n");
	scanf("%d", &newNode->noOfShops);

	printf("Enter Mall revenue\n");
	scanf("%f", &newNode->revenue);

	newNode->next = NULL;

	if(head == NULL){
		
		head = newNode;
	}else{
	
		mall *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printLL(){

	mall *temp = head;

	while(temp != NULL){
	
		printf("|Mall Name is : %s ->", temp->mName);
		printf("No of shops in Mall : %d ->", temp->noOfShops);
		printf("Mall Revenue : %f|", temp->revenue);

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
