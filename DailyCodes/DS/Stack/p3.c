/*	Program 3 :
 *
 *	Topic : Implementing Stack Using Linked List
*/

#include<stdio.h>
#include<stdlib.h>

int top = 0, flag = 0, size = 0;

typedef struct Stack{

	int data;
	struct Stack *next;
}stack;

stack *head = NULL;

stack *createNode(){

	stack *newNode = (stack*)malloc(sizeof(stack));

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

int push(){

	stack *newNode = createNode();
	
	if(size == top){
	
		printf("Stack OverFlow\n");
	
	}else{
		if(head == NULL){
			head = newNode;
		}else{
	
			stack *top = head;

			while(top->next != NULL){
			
				top = top->next;
			}

			top->next = newNode;
		}

		top++;

		return 0;
	}
}

int pop(){

	if(head == NULL){
	
		printf("Stack UnderFlow\n");
		
		flag = 1;

		return -1;
	}else{
		int ret;

		flag = 0;

		if(head->next == NULL){
			
			ret = head->data;

			free(head);
			head = NULL;
		}else{
		
			stack *top = head;

			while(top->next->next != NULL){
			
				top = top->next;
			}
			
			ret = top->next->data;

			free(top->next);
			top->next = NULL;

		}

		top--;


		return ret;
	}
}

int peek(){

	if(head == NULL && top == 0){
	
		printf("Stack UnderFlow\n");
		return -1;
	}else{
		int ret;

		if(head->next == NULL){
		
			ret = head->data;

		}else{

			stack *top = head;

			while(top->next != NULL){
			
				top = top->next;
			}

			ret = top->data;
		}

		return ret;
	}
}

void main(){
	
	printf("Enter Size of Stack :\n");
	scanf("%d", &size);


	char choice;

	do{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				push();
				break;
			case 2:
				{
					int ret = pop();

					if(flag != 1){
					
						printf("Popped : %d\n", ret);
					}
				}
				break;
			case 3:
				{
					int ret = peek();

					if(flag != 1){
						
						printf("Peek is : %d\n", ret);
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
