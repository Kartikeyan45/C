/*	Program 6 :
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

	int data;

	struct Demo *next;
}demo;

demo *head = NULL;

demo* createNode(){

	demo *newNode = (demo*)malloc(sizeof(demo));

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
	}	
}

void addFirst(){

	demo *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head = newNode;
	}
}

int countNodes();

void addAtPos(int pos){

	demo *newNode = createNode();

	demo *temp = head;
	
	int size = countNodes();

	if(pos > 1 && pos < size){
		while(pos - 2){
	
			temp = temp->next;
			pos--;
		}

	newNode->next = temp->next;
	temp->next = newNode;
	}else{
	
		printf("Enter Valid position to enter\n");
	}
}

int countNodes(){

	demo *temp = head;

	int count = 0;

	while(temp != NULL){
		
		count++;
		temp = temp->next;
	}
	
	printf("Count is :%d\n",count);

	return count;
}

void printLL(){

	demo *temp = head;

	while(temp != NULL){
	
		printf("|Data is : %d|", temp->data);

		temp = temp->next;	
	}
	printf("\n");
}

void main(){

	char choice;

	do{
		
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addAtPos\n");
		printf("4.countNodes\n");
		printf("5.printLL\n");

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
				{
				int pos;
				printf("Enter Node Position\n");
				scanf("%d", &pos);

				addAtPos(pos);	
				}
				break;
			case 4:
				countNodes();
				break;
			case 5:	
				printLL();			
				break;	
			default:
				printf("Enter Correct Choice\n");		
			
		}

		getchar();
		printf("Do u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'y' || choice == 'Y');
}
