/*	
 *	Real Time Example of Singly Linked List
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct StartUp{
	
	char sName[20];
	int emp;
	float revenue;

	struct StartUp *next;
}st;

st *head = NULL;

//1
st* createNode(){

	st *newNode = (st*)malloc(sizeof(st));
	
	printf("Enter StartUp Name\n");

	getchar();

	int ch;
	int i = 0;

	while((ch = getchar()) != '\n'){
	
		(*newNode).sName[i] = ch;
		i++;
	}

	printf("Enter Employees in Startup\n");
	scanf("%d", &newNode->emp);

	printf("Enter StartUp Revenue\n");
	scanf("%f", &newNode->revenue);

	newNode->next = NULL;

	return newNode;
}

//2
void addNode(){

	st *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
	
		st *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}	
}

//3
void addFirst(){

	st *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head = newNode;
	}
}

//4
void addLast(){

	addNode();
}

//5
int countNodes(){
	
	if(head == NULL){
	
		printf("LL is empty\n");
	}

	st *temp = head;
	
	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	printf("Count is : %d\n", count);

	return count;
}

//6
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
	
			st *newNode = createNode();

			st *temp = head;

			while(pos - 2){
		
				temp = temp->next;
				pos--;
			}

			newNode->next = temp->next;
			temp->next = newNode;
		}
	}
}

//7
int deleteFirst(){
	
	if(head == NULL){
	
		printf("Nothing to delete\n");
		return -1;

	}else if(head->next == NULL){
	
		free(head);
		head = NULL;
		printf("Only 1 StartUp is present and is become bankrupt\n");
	}
	else{
		st *temp = head;

		head = head->next;		//1 st way
		//head = temp->next;		//2 nd way
	
		free(temp);
	}
}

//8
void deleteLast(){
	

	st *temp = head;

	if(head->next == NULL){
	
		free(head);
		head = NULL;
		printf("only 1 startup present and is become bankrupt\n");
	}else if(head->next->next != NULL){

		while(temp->next->next != NULL){
	
			temp = temp->next;
		}

		free(temp->next);
		temp->next = NULL;
	}else{
	
		printf("No startup is present\n");
	}
}

//9
int deleteAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 || pos > count){
	
		printf("Invalid position to delete\n");
		return -1;
	}else{
		if(pos == 1){
	
			deleteFirst();

		}else if(pos == count){
			
			deleteLast();
		}else{
		
			st *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			st *temp1 = temp->next;
			temp->next = temp->next->next;
			free(temp1);
		}

		return 0;
	}
}

//10
int printLL(){
	
	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{

		st *temp = head;

		while(temp->next != NULL){
	
			printf("|%s : %d : %f|->", temp->sName, temp->emp, temp->revenue);

			temp = temp->next;	
		}
		printf("|%s : %d : %f|", temp->sName, temp->emp, temp->revenue);
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
				printf("Enter Node Position\n");
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
				printf("Enter pos to delete\n");
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

	}while(choice == 'y' || choice == 'Y');
}
