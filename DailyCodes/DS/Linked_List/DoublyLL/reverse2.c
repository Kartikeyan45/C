/*	Program 2 :
 *
 *	Reverse Linked List :
 *		
 *		1]Using Doubly Linked List
 *
 *			1] Using Temp Pointer
 *			2] Using Swap
 *			3] using inplace reverse
 *
 *		2]Using Singly Linked List
*/

/*	1] Using deoubly Linked List
 *		1] Using swap
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{
	
	struct Demo *prev;
	int data;
	struct Demo *next;
}demo;

demo *head = NULL;

demo *createNode(){
	
	demo *newNode = (demo*)malloc(sizeof(demo));

	newNode->prev = NULL;

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	demo *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		demo *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;

		newNode->prev = temp;	
	}
}

int countNodes(){

	demo *temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	return count;
}

int reverse(){
	
	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}

	demo *temp1 = head;

	demo *temp2 = head;

	int count = countNodes();

	int cnt = count / 2;

	while(temp2->next != NULL){	//temp2 la last node paryant firavtoy 
	
		temp2 = temp2->next;
	}

	while(cnt){		
	
		int temp = temp2->data;

		temp2->data = temp1->data;
		temp1->data = temp;

		temp1 = temp1->next;
		temp2 = temp2->prev;

		cnt--;
	}
}

void printLL(){

	demo *temp = head;

	while(temp->next != NULL){
	
		printf("|%d|->", temp->data);
		temp = temp->next;
	}

	printf("|%d|\n", temp->data);
}

void main(){

	int nodeCount;
	printf("Enter Node Count\n");
	scanf("%d", &nodeCount);

	for(int i = 1; i <= nodeCount; i++){
	
		addNode();
	}

	printLL();

	reverse();
	
	printf("\n");
	printLL();
}
