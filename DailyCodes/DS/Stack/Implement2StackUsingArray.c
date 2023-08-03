/*	Program 6 :
 *
 *	Topic : Implementing 2 Stack Using Array
 *
*/

#include<stdio.h>

int top1 = 0, top2 = 0;
int size = 0;
int flag1 = 0, flag2 = 0;

int push1(int arr[]){

	if(top1 == top2 - 1){
			
		return -1;
	}else{

		top1++;
		printf("Enter Data\n");
		scanf("%d", &arr[top1]);

		return 0;
	}
}

int push2(int arr[]){

	if(top1 == top2 - 1){
	
		return -1;
	}else{

		top2--;
		printf("Enter Data\n");
		scanf("%d", &arr[top2]);

		return 0;
	}
}

int pop1(int arr[]){

	if(top1 == -1){
	
		return -1;
	}else{
	
		int val = arr[top1];

		top1--;

		flag1 = 1;

		return val;
	}
}

int pop2(int arr[]){

	if(top2 == size){
	
		return -1;
	}else{
	
		int val = arr[top2];

		top2++;

		flag2 = 1;

		return val;
	}
}

int peek1(int arr[]){

	if(top1 == -1){
	
		flag1 = 0;

		return -1;
	}else{	
		int val = arr[top1];

		flag1 = 1;

		return val;
	}
}

int peek2(int arr[]){

	if(top2 == size){
	
		flag2 = 0;

		return -1;
	}else{	
		int val = arr[top2];

		flag2 = 1;

		return val;
	}
}

void main(){

	printf("Enter Array Size\n");
	scanf("%d", &size);

	int arr[size];
	
	int top1 = -1;
	int top2 = size;

	char choice;

	do{
		printf("1.Push1\n");
		printf("2.Push2\n");
		printf("3.Pop1\n");
		printf("4.Pop2\n");
		printf("5.Peek1\n");
		printf("6.Peek2\n");

		int ch;
		printf("Enter Choice\n");
		scanf("%d", &ch);

		switch(ch){
		
			case 1:
				{
					int ret = push1(arr);

					if(ret == -1){
				
						printf("Stack OverFlow-1\n");
					}
				}
				break;
			case 2:
				{
					int ret = push2(arr);

					if(ret == -1){
				
						printf("Stack OverFlow-2\n");
					}
				}
				break;
			case 3:
				{
					int ret = pop1(arr);

					if(ret == -1){
						
						printf("Stack UnderFlow-1\n");
					}else{
						printf("Popped : %d\n", ret);
					}
				}
				break;
			case 4:
				{
					int ret = pop2(arr);

					if(ret == -1){
						
						printf("Stack UnderFlow-2\n");
					}else{
						printf("Popped : %d\n", ret);
					}
				}
				break;
			case 5:
				{
					int ret = peek1(arr);

					if(flag1 == 0){
						
						printf("Array is Empty\n");
					}else{				

						printf("Peek : %d\n", ret);
					}
				}
				break;
			case 6:
				{
					int ret = peek2(arr);

					if(flag2 == 0){
						
						printf("Array is Empty\n");
					}else{				

						printf("Peek : %d\n", ret);
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
