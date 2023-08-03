/*
 *
 *	Real Time Example
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Youtuber{
	
	struct Youtuber *prev;

	char yname[20];
	int subscribers;
	float rev;

	struct Youtuber *next;
}you;

you *head = NULL;

you *createNode(){

	you *newNode = (you*)malloc(sizeof(you));

	newNode->prev = NULL;

	printf("Enter Youtuber Name\n");

	getchar();

	int ch;
	int i = 0;

	while((ch = getchar()) != '\n'){
	
		(*newNode).yname[i] = ch;
		i++;
	}

	printf("Enter Youtubers Subscribers\n");
	scanf("%d", &newNode->subscribers);

	printf("Enter Youtubers Revenue\n");
	scanf("%f", &newNode->rev);

	newNode->next = NULL;

	return newNode;
}

int countNodes(){
	
	if(head == NULL){
	
		printf("LL is empty\n");
	}

	you *temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	printf("Count is :%d\n", count);

	return count;
}

void addFirst(){

	you *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

void addNode(){

	you *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
	
		you *temp = head;

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

	if(pos <= 0 || pos >= count+2){
	
		printf("Invalid pos to insert\n");
		return -1;
	}else{
	
		if(pos == count + 1){
		
			addNode();
		}else if(pos == 1){
		
			addFirst();
		}else{
		
			you *newNode = createNode();

			you *temp = head;

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

	if(head == NULL){
	
		printf("Nothing to delete\n");
		return -1;

	}else{
		
		if(head->next == NULL){
			free(head);
			head = NULL;
		}else{
			head = head->next;
			free(head->prev);
			head->prev = NULL;
		}
	}
}

int deleteLast(){

	if(head == NULL){
	
		printf("Nothing to delete\n");
		return -1;
	}else{ 
		if(head->next == NULL){
	
			free(head);
			head == NULL;
		}else{
	
			you *temp = head;

			while(temp->next->next != NULL){
		
				temp = temp->next;
			}

			free(temp->next);
			temp->next = NULL;
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
		
			you *temp = head;

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

int printLL(){
	
	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{

		you *temp = head;

		while(temp->next != NULL){
	
			printf("|%s|->", temp->yname);
			printf("|%d|->", temp->subscribers);
			printf("|%f|->", temp->rev);

			temp = temp->next;
		}

		printf("|%s|", temp->yname);
		printf("|%d|", temp->subscribers);
		printf("|%f|", temp->rev);
	}

	return 0;
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
