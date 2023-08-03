/*	Program 1 :
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

void addNode(){

	node *newNode = createNode();

	if(head == NULL){
		
		head = newNode;
		newNode->next = head;
	}else{
	
		node *temp = head;

		while(temp->next != head){
		
			temp = temp->next;
		}

		temp->next = newNode;
	       	newNode->next = head;
	}
}

void addFirst(){
	
	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		newNode->next = head;
	}else{
	
		node *temp = head;

		while(temp->next != head){
		
			temp = temp->next;
		}

		temp->next = newNode;	
		newNode->next = head;
		head = newNode;
	}
}

void addLast(){

	addNode();
}

int printLL(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}

	node *temp = head;

	while(temp->next != head){
	
		printf("|%d|->", temp->data);

		temp = temp->next;
	}

	printf("|%d|", temp->data);
}

int countNodes(){
	
	node *temp = head;

	int count = 0;

	do{
		count++;
		temp = temp->next;

	}while(temp != head);

	printf("Count is : %d\n", count);

	return count;
}

int addAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 || pos >= count+2){
	
		printf("Invalid Pos to  insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			addFirst();
		}else if(pos == count){
		
			addLast();
		}else{
		
			node *newNode = createNode();

			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			newNode->next = temp->next;
			temp->next = newNode;
		}
	}
}

int deleteFirst(){

	int count = countNodes();

	if(head == NULL){
	
		printf("Nothing to delete\n");
		return -1;
	}else{
	
		if(count == 1){
		
			free(head);
			head = NULL;
		}else{
		
			node *temp = head;

			head = head->next;
			free(temp->next);

			temp->next = NULL;
			head->next->next = head;

			//free(head->next);
			//head->next = head;
		}

		return 0;
	}
}

int deleteLast(){

	int count = countNodes();

	if(head == NULL){
	
		printf("Nothing to delete\n");
		return -1;
	}else{
	
		if(count == 1){
		
			free(head);
			head = NULL;
		}else{
		
			node *temp = head;

			while(temp->next->next != NULL){
			
				temp = temp->next;
			}

			free(temp->next);
			temp->next = head;
		}

		return 0;
	}
}

int deleteAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 || pos > count){
	
		printf("Invalid Pos\n");
		return -1;
	}else{
		if(pos == 1){
		
			deleteFirst();

		}else if(pos == count){
		
			deleteLast();
		}else{
	
			node *temp = head;

			while(pos - 2){
		
				temp = temp->next;
				pos--;
			}

			node *temp1 = temp->next;
			temp->next = temp->next->next;
			free(temp1);
		}

		return 0;
	}
}

void main(){

	char choice;

	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addLast\n");
		printf("4.countNodes\n");
		printf("5.addAtPos\n");
		printf("6.deleteFirst\n");
		printf("7.deleteLast\n");
		printf("8.deleteAtPos\n");
		printf("9.printLL\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
				break;
			case 3:
				addLast();
				break;
			case 4:
				countNodes();
				break;
			case 5:
				{
				int pos;
				printf("Enter Pos\n");
				scanf("%d", &pos);

				addAtPos(pos);

				}
				break;
			case 6 :
				deleteFirst();
				break;
			case 7 :
				deleteLast();
				break;
			case 8 :	
				{
				int pos;
				printf("Enter Pos\n");
				scanf("%d", &pos);

				deleteAtPos(pos);
				}
				break;
			case 9 :
				printLL();
				break;
			default :
				printf("Enter Correct Position\n");
		}

		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);
		
	}while(choice == 'Y' || choice == 'y');
}
