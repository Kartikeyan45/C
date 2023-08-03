/*	Program 7 : Remove Duplicates from Sorted Linked List
 *	
 *	Input LL : |10|->|10|->|20|->|10|
 *
 *	Ouput LL : |20|
 *
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

node *deleteDuplicates(){

	if(head == NULL){
		return NULL;
	}

	node *curr = head;

	while(curr != NULL){
		
		node *temp = head;

		while(temp != NULL){

			if(curr->data == temp->data){
			
				node *temp2 = curr->next->next;
	
				free(curr->next);
	
				curr->next = temp2;
			}else{
								// T.C = O(n^2)
								// S.C = O(1)
				temp = temp->next;
			}
		}

		curr = curr->next;
	}

	return head;
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
	
	char choice;	

	do{
	
		printf("1.addNode\n");
		printf("2.printLL\n");
		printf("3.removeDuplicates\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				addNode();
				break;
			case 2:
				printLL();
				break;
			case 3:
				deleteDuplicates();
				break;
			default:
				printf("Enter Correct Choice\n");
		}

		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'Y' || choice == 'y');
}
