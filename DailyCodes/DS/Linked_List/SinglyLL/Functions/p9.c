/*	Program 9 :
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
	
	int count = countNodes();
	
	if(pos <= 0 || pos >= count + 2){

		printf("Invalid Position to insert\n");
	}else{
	
		if(pos == 1){

			addFirst();
		}else if(pos == count + 1){
		
			addNode();
		}else{
	
			demo *newNode = createNode();

			demo *temp = head;

			while(pos - 2){
		
				temp = temp->next;
				pos--;
			}

			newNode->next = temp->next;
			temp->next = newNode;
		}
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

void deleteFirst(){

	demo *temp = head;

	head = temp->next;

	free(temp);
}

void deleteLast(){

	demo *temp = head;

	while(temp->next->next != NULL){
	
		temp = temp->next;
	}

	free(temp->next);
	temp->next = NULL;
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
		printf("5.deleteFirst\n");
		printf("6.deleteLast\n");
		printf("7.printLL\n");

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
				deleteFirst();
				break;
			case 6:
				deleteLast();
				break;
			case 7:	
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
