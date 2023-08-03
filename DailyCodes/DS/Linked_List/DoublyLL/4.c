/*	PRogram 4:
 *
 *	6] addAtPos
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

int countNodes(){

	demo *temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	printf("Count is :%d\n", count);

	return count;
}

void addFirst(){

	demo *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
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

int addAtPos(int pos){
	
	int count = countNodes();

	if(pos <= 0 && pos >= count+2 ){
	
		printf("Invalid pos to insert\n");
		return -1;
	}else{
	
		if(pos == count + 1){
		
			addNode();
		}else if(pos == 1){
		
			addFirst();
		}else{
		
			demo *newNode = createNode();

			demo *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
		}

		return 0;
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
	printf("Enter Nodes\n");
	scanf("%d", &nodeCount);

	for(int i = 1; i <= nodeCount; i++){
	
		addNode();
	}

	printLL();

	countNodes();

	addFirst();

	printLL();

	int pos;
	printf("Enter pos to insert\n");
	scanf("%d", &pos);

	addAtPos(pos);

	printLL();
}
