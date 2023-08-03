

/*	Program 5 :
 *
 *	Topic : Implementing Stack Using Array
 *
 *	Proper Template
*/

#include<stdio.h>
#include<stdbool.h>

int top = -1, size = 0, flag = 0;

bool isFull(){

	if(top == size - 1){
	
		return true;
	}else{
		
		return false;
	}
}

int push(int stack[]){

	if(isFull()){
	
		return -1;
	}else{

		top++;
		printf("Enter Data\n");
		scanf("%d", &stack[top]);

		return 0;
	}
}

bool isEmpty(){

	if(top == -1){
	
		return true;
	}else{
		
		return false;
	}
}

int pop(int stack[]){

	if(isEmpty()){
	
		flag = 0;
		return -1;
	}else{
	
		int val = stack[top];
		top--;

		flag = 1;

		return val;
	}
}

int peek(int stack[]){

	if(isEmpty()){
	
		flag = 0;

		return -1;
	}else{	
		int val = stack[top];

		flag = 1;

		return val;
	}
}

void printStack(int *stack){

	if(top == -1){
	
		printf("Stack UnderFlow\n");
	}else{
	
		for(int i = top; i >= 0; i--){
		
			printf("|%d|\n", *(stack + i));
		}
	}
}

void main(){

	printf("Enter Stack Size\n");
	scanf("%d", &size);

	int stack[size];

	char choice;

	do{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.isFull\n");
		printf("5.isEmpty\n");
		printf("6.printSatck\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				{
					int ret = push(stack);

					if(ret == -1){
				
						printf("Stack OverFlow\n");
					}
				}
				break;
			case 2:
				{
					int ret = pop(stack);

					if(flag == 0){
						
						printf("Stack UnderFlow\n");
					}else{
						printf("Popped : %d\n", ret);
					}
				}
				break;
			case 3:
				{
					int ret = peek(stack);

					if(flag == 0){
						
						printf("Stack is Empty\n");
					}else{				

						printf("Peek : %d\n", ret);
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
			case 6:
				printStack(stack);
				break;

			default:
				printf("Enter Correct Choice\n");
		}

		getchar();
		printf("Do u want to continue\n");
		scanf("%c", &choice);
	
	}while(choice == 'Y' || choice == 'y');
}
