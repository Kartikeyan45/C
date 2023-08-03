/*	PRogram 9 :
 *
 *	Doubly Template handeled all cases
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

void addLast(){

	addNode();
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

int deleteFirst(){

	int count = countNodes();

	if(head == NULL){
	
		printf("Nothing to delete\n");
		return -1;
	}else if(count == 1){
	
		free(head);
		head = NULL;
	}else{
	
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
}

int deleteLast(){

	int count = countNodes();

	if(head == NULL){
	
		printf("Nothing to delete\n");
		return -1;
	}else if(count == 1){
	
		free(head);
		head == NULL;
	}else{
	
		demo *temp = head;

		while(temp->next->next != NULL){
		
			temp = temp->next;
		}

		free(temp->next);
		temp->next = NULL;
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
		
			demo *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
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

	char choice;

	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addLast\n");
		printf("4.addAtPos\n");
		printf("5.countNodes\n");
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
				{
				int pos;
				printf("Enter Position to insert\n");
				scanf("%d", &pos);

				addAtPos(pos);
				}
				break;
			case 5:
				countNodes();
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;
			case 8:
				{
				int pos;
				printf("Enter Position to insert\n");
				scanf("%d", &pos);

				deleteAtPos(pos);
				}
				break;
			case 9:
				printLL();
				break;
			default:
				printf("Enter Correct Choice\n");
		
		}

		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);
	
	}while(choice == 'Y' || choice == 'y');
}
