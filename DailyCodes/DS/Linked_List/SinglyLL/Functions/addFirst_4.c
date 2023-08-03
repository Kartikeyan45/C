
#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{
	
	int id;
	char name[20];

	struct Employee *next;
}emp;

emp *head = NULL;

emp *createNode(){
	
	emp *newNode = (emp *)malloc(sizeof(emp));

	printf("Enter Employee id\n");
	scanf("%d", &newNode->id);

	printf("Enter Employee Name\n");

	getchar();

	int ch;
	int i = 0;

	while((ch = getchar()) != '\n'){
		
		(*newNode).name[i] = ch;
		i++;
	}

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	
	emp *newNode = createNode();

	if(head == NULL){
		
		head = newNode;
	}else{
		
		emp *temp = head;

		while(temp->next != NULL){
			
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void countNodes(){
	
	emp *temp = head;

	int count = 0;

	while(temp != NULL){
		
		count++;

		temp = temp->next;
	}

	printf("Count is : %d\n", count);
}

void addFirst(){
	
	emp *newNode = createNode();

	if(head == NULL){
		
		head = newNode;
	}else{
		
		newNode->next = head;
		head = newNode;
	}
}

void addAtPos(int pos){

	emp *newNode = createNode();

	emp *temp = head;

	while(pos - 2){
		
		temp = temp->next;
		pos--;
	}

	newNode->next = temp->next;
	temp->next = newNode;
}

void printLL(){
	
	emp *temp = head;

	while(temp != NULL){
		
		printf("| ID is : %d -> ", temp->id);
		printf("Name is : %s |", temp->name);

		temp = temp->next;
	}

	printf("\n");
}

void main(){
	
	int nodeCount;
	printf("Enter Node Count\n");
	scanf("%d", &nodeCount);

	for(int i = 0; i < nodeCount; i++){
		
		addNode();
	}

	printLL();

	countNodes();

	addFirst();

	int pos;
	printf("Enter Position to Insert Node :\n");
	scanf("%d", &pos);

	addAtPos(pos);

	printLL();
}
