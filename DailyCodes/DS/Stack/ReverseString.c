/*
 * 	Question 1: Reverse a String  Using Stack
 *
 * 	Stack madhe kahi pan takla tar reverse milun jato
 * 	karan toh asto LIFO Pattern madhe asto
*/

#include<stdio.h>
#include<string.h>

int top = -1;

#define max 100
int str[max];

void push(char x){

	if(top == max-1){
	
		printf("Stack Overflow\n");
	}else{
	
		top++;
		str[top] = x;
	}
}

void pop(){

	if(top == -1){
	
		printf("Stack UnderFlow\n");
	}else{
	
		printf("%c", str[top--]);
	}
}

void main(){
	
	char str[20];

	printf("Enter String\n");
	fgets(str, 10, stdin);
	printf("%s\n", str);

	int len = strlen(str);
	
	int i;

	for(i = 0; i < len; i++){
	
		push(str[i]);
	}
	
	for(i = 0; i < len; i++){
	
		pop();
	}

	printf("\n");
}
