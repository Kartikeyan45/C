/*	Program 2 :
 *
 *	Implementing Stack Using Array
*/

#include<stdio.h>

int top = -1, size = 0, flag = 0;

int push(int *stack){

	if(top == size - 1){
	
		printf("Stack OverFlow\n");
		return -1;
	}else{
		top++;
		scanf("%d", (stack + top));

		return 0;
	}
}

int pop(int *stack){

	if(top == -1){
	
		printf("Stack UnderFlow\n");
		flag = 1;
		return -1;
	}else{
	
		int ret = *(stack + top);
		top--;
		flag = 0;

		return ret;
	}
}

int peek(int stack[]){

	if(top == -1){
	
		printf("Stack UnderFlow\n");
		flag = 1;
		return -1;
	}else{
		flag = 0;
		return *(stack + top);
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

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				push(stack);
				break;
			case 2:
				{
					int ret = pop(stack);

					if(flag != 1){
					
						printf("Popped : %d\n", ret);
					}
				}
				break;
			case 3:
				{
					int ret = peek(stack);

					if(flag != 1){
						
						printf("Peek : %d\n", ret);
					}
				}
				break;
			case 4:
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
