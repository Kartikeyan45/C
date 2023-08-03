/*	Program 7 :
 *
 *	Doubly Circular Template
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

void addLast(){

	addNode();
}

int countNodes(){

	if(head == NULL){
		printf("LL is empty\n");
		return -1;
	}

	int count = 0;
	
	node *temp = head;

	do{
		count++;
		temp = temp->next;
	
	}while(temp != head);

	printf("%d\n", count);

	return count;
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
		
			node *temp = head->prev;

			head->prev->next = head->next;
			head = head->next;
			free(head->prev);
			head->prev = temp;
		}

		return 0;
	}
}

int deleteLast(){

	if(head == NULL){
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == head){
		
			free(head);
			head = NULL;
		}else{
		
		/*	node *temp = head;

			while(temp->next->next != NULL){
			
				temp = temp->next;
			}

			node *temp1 = temp->next;

			temp->next = head;
			head->prev = temp;
			free(temp1);
		*/

			head->prev = head->prev->prev;
			free(head->prev->next);
			head->prev->next = head;
		}

		return 0;
	}
}

int deleteAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 || pos > count){
	
		printf("Invalid pos\n");
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
			
			temp->next->next->prev = temp;
			temp->next = temp->next->next;
			free(temp1); 
/*			
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
*/
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
				printf("Enter Pos\n");
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
				printf("Enter Pos to delete\n");
				scanf("%d", &pos);

				deleteAtPos(pos);
				}
				break;
			case 9:
				printLL();
				break;
			default:
				printf("Enter Correct Pos\n");

		}

		getchar();
		printf("Do u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'Y' || choice == 'y');
}
