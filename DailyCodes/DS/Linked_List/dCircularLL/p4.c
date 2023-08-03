/*	Program 3 :
 *
 *	3 - deleteFirst()
*/	

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	struct Node *prev;

	int data;

	struct Node *next;
}node;

node *head = NULL;

node *createNode(){

	node *newNode = (node*)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;

		head->prev = head;
		head->next = head;
	}else{
	
/*		node *temp = head;

		while(temp->next != head){
		
			temp = temp->next;
		}

		temp->next = newNode;
		newNode->prev = temp;
		newNode->next = head;
		head->prev = newNode;

*/		
		head->prev->next = newNode;		// without using temp
		newNode->prev = head->prev;
		newNode->next = head;
		head->prev = newNode;		
	}
}

void addFirst(){
	
	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		head->next = head;
		head->prev = head;
	}else{
	
		newNode->next = head;
		newNode->prev = head->prev;
		head->prev->next = newNode;
		head->prev = newNode;
		head = newNode;

		
/*		head->prev = newNode;
		head = newNode;
		head->prev->next = head;

*/
	}
}

int countNodes(){

	if(head == NULL){
		printf("LL is empty\n");
		return -1;
	}else{
	
		node *temp = head;

		int count = 0;

		while(temp->next != head){
			
			count++;
			temp = temp->next;
		}

		return count;
	}
}

int addAtPos(int pos){
		
	int count = countNodes();

	if(pos <= 0 || pos >= count+2){
	
		printf("Invalid Pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			addFirst();	
		}else if(pos == count + 1){
		
			addNode();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			node *newNode = createNode();

			newNode->next = temp->next;
			temp->next->prev = newNode;
			temp->next = newNode;
			newNode->prev = temp;
		}

		return 0;
	}
}

int deleteFirst(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == head){
		
			free(head);
			head = NULL;
		}else{

			head->next->prev = head->prev;
			head = head->next;
			free(head->prev->next);
			head->prev->next = head;
		}

		return 0;
	}
}

int printLL(){

	if(head == NULL){
		
		printf("LL is empty\n");
		return -1;
	}else{
	
		node *temp = head;

		while(temp->next != head){
		
			printf("|%d|->", temp->data);

			temp = temp->next;
		}

		printf("|%d|\n", temp->data);
	}

	return 0;
}

void main(){

	int nodeCount;
	printf("Enter Node count\n");
	scanf("%d", &nodeCount);

	for(int i = 1; i <= nodeCount; i++){
	
		addNode();
	}

/*	printLL();

	addFirst();

	printLL();

	int pos;
	printf("Enter pos \n");
	scanf("%d", &pos);

	addAtPos(pos);
*/
	
	printLL();
	
	deleteFirst();

	printLL();
}
