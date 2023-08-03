/*	Program 1 : Middle Node OF LL
 *
 *	Input LL : |10|->|20|->|30|->|40|->|50|->|60|
 *
 *	Ouput : Middle Node is 40
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	int data;
	struct Node *next;
}node;

node *head = NULL;

node *createNode(){

	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

int addNode(){

	node *newNode = createNode();
	
	if(head == NULL){
		head = newNode;
	}else{
		node *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return 0;
}

int middle(){

	node *slow = head;
	node *fast = head;
	
	int pos = 1;

	if(head == NULL){

		return -1;
	}else{
		while(fast != NULL && fast->next != NULL){
	
			fast = fast->next->next;
			slow = slow->next;
			pos++;
		}
	}

	return slow->data;
//	return pos;
}

int printLL(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		node *temp = head;

		while(temp->next != NULL){
			
			printf("|%d|->", temp->data);

			temp = temp->next;
		}

		printf("|%d|\n", temp->data);
	}
}

void main(){
	
	int nodeCount;
	printf("Enter NodeCount\n");
	scanf("%d", &nodeCount);

	for(int i = 1; i <= nodeCount; i++){
	
		addNode();
	}
	
	printLL();

	int val = middle();

	printf("%d\n", val);
}
