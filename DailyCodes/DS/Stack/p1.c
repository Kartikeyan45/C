/*
 *	Stack is just a perspective i.e bagnyacha drushikone vegala ahe
 *
 *	Stack real time example is "OS"
 *
 *	Stack Operations
 *		1] Push - insert data and prints
 *		2] Pop - remove data and prints
 *		3] Peek - fakt print kar data
*/

//	Program 1 : Implementing Stack using Array

#include<stdio.h>

int top = -1;

int arr[5];

void push(int data){

	top++;
	arr[top] = data;
}

void main(){

	push(10);
	push(20);
	push(30);
	push(40);
	push(50);

	for(int i = top; i >= 0; i--){
	
		printf("|%d|", arr[i]);
	}

	printf("\n");
}
