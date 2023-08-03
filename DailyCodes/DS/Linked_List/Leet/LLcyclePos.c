/*	Program 9 : LL Cycle
 *	
 *	Input LL : |10|->|10|->|20|
 *
 *	Output : Tail Connets to node index 1
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

node *detectCycle(){

	if(head == NULL){
		return NULL;
	}

	node *slow = head;
	node *fast = head;

	while(fast != NULL && fast->next != NULL){
		
		slow = slow->next;
		fast = fast->next->next;

		//slow == fast means circle exist
		if(slow == fast){
		
			node *slow1 = head;

			//if loop exists, start slow1 from head
			//and slow from meeting point

			while(slow != slow1){
				
				slow = slow->next;
				slow1 = slow1->next;
			}

			return slow;
		}
	}

	return NULL;
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
		printf("3.detectCycle\n");

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
				detectCycle();
				break;
			default:
				printf("Enter Correct Choice\n");
		}

		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'Y' || choice == 'y');
}
