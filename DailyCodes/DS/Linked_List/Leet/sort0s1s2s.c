/*	Program : Sort Os 1s 2s in LL
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

node *sort(){

	int zero = 0;
	int one = 0;
	int two = 0;

	node *temp = head;

	while(temp != NULL){
	
		if(temp->data == 0){
			zero++;
		}else if(temp->data == 1){
			one++;
		}else{
			two++;
		}

		temp = temp->next;
	}

	temp = head;

	while(temp != NULL){
		
		if(zero != 0){
			temp->data = 0;
			zero--;
		}else if(one != 0){
			temp->data = 1;
			one--;
		}else{
			temp->data = 2;
			two--;
		}

		temp = temp->next;
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
		printf("3.sort\n");

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
				sort();
				break;
			default:
				printf("Enter Correct Choice\n");
		}

		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'Y' || choice == 'y');
}
