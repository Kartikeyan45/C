/*	Program 6 :
 *
 *	Topic : Implementing Stack Using Linked List
 *
 *	Proper Template
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int countNodes = 0, flag = 0, size = 0;

typedef struct Node{

	int data;
	struct Node *next;
}node;

node *head = NULL;

int eleCount(){

	int count = 0;

	node *temp = head;

	while(temp != NULL){
		
		count++;
		temp = temp->next;
	}

	return count;
}

bool isFull(){

	if(eleCount() == countNodes){
	
		return true;
	}else{
	
		return false;
	}
}

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
	}else{
	
		node *temp = head;

		while(temp->next != NULL){
			
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

int push(){

	if(isFull()){
	
		return -1;
	}else{
	
		addNode();

		return 0;
	}
}

bool isEmpty(){

	if(head == NULL){
	
		return true;
	}else{
	
		return false;
	}
}

int deleteLast(){

	if(isEmpty()){
		
		flag = 0;

		return -1;
	}else{

		int ret;

		if(eleCount() == 1){
			
			ret = head->data;

			free(head);
			head = NULL;
		}else{
		
			node *top = head;

			while(top->next->next != NULL){
			
				top = top->next;
			}
			
			ret = top->next->data;

			free(top->next);
			top->next = NULL;

		}

		return ret;
	}
}

int pop(){

	if(isEmpty()){
	
		flag = 0;
		return -1;
	}else{
	
		int val = deleteLast();

		flag = 1;

		return val;
	}
}

int printLL(){

	int ret;

	if(head->next == NULL){
		
		ret = head->data;

	}else{

		node *top = head;

		while(top->next != NULL){
			
			top = top->next;
		}

		ret = top->data;
	}

	return ret;
}

int peek(){

	if(isEmpty()){
	
		flag = 0;
		return -1;
	}else{
	
		int val = printLL();
		flag = 1;
		return val;
	}
}

void main(){
	
	printf("Ente Stack Node Count:\n");
	scanf("%d", &countNodes);


	char choice;

	do{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.isFull\n");
		printf("5.isEmpty\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				{
					int ret = push();

					if(ret == -1){
					
						printf("Stack OverFlow\n");
					}
				}
				break;
			case 2:
				{
					int ret = pop();

					if(flag == 0){
						
						printf("Stack UnderFlow\n");
					}else{
						printf("Popped : %d\n", ret);
					}
				}
				break;
			case 3:
				{
					int ret = peek();

					if(flag == 0){
						
						printf("Stack is Empty\n");
					}else{
						printf("Peek is : %d\n", ret);
					}
				}
				break;
			case 4:
				{
					bool ret = isFull();

					if(ret == true){
					
						printf("Stack is Full\n");
					}else{
					
						printf("Stack is not Full\n");
					}
				}
				break;

			case 5:
				{
					bool ret = isEmpty();

					if(ret == true){
					
						printf("Stack is Empty\n");
					}else{
					
						printf("Stack is not Empty\n");
					}
				}
				break;

			default:
				printf("Enter Correct Choice\n");
		}

		getchar();
		printf("Do u want to continue\n");
		scanf("%c", &choice);
	
	}while(choice == 'Y' || choice == 'y');
}
