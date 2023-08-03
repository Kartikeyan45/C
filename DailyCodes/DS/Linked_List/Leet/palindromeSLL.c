/*	Program 3 : Check Whether LL is Palindrome or not
 *
 *	Input LL : |10|->|20|->|10|
 *
 *	Ouput LL : LL is Palindrome
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

int countNodes(){

	int count = 0;

	node *temp = head;

	while(temp != NULL){
	
		count++;

		temp = temp->next;
	}

	return count;
}

bool isPalindrome(){

	if(head == NULL){
	
		return false;
	}else{
	
		if(head->next == NULL){
			
			return true;
		}else{
		
			int count = countNodes();

			int arr[count];

			node *temp = head;

			int i = 0;

			while(temp != NULL){
				
				arr[i] = temp->data;

				i++;

				temp = temp->next;
			}

			int start = 0;
			int end = count-1;

			while(start < end){
			
				if(arr[start] != arr[end]){
				
					return false;
				}

				start++;
				end--;
			}

			return true;
		}
	}
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
		printf("3.Palindrome\n");

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
				{
					bool val = isPalindrome();

					if(val == false){
						printf("LL is not Plaindrome\n");
					}else{
						printf("LL is Palindrome\n");
					}
				}
				break;
			default:
				printf("Enter Correct Choice\n");
		}

		getchar();
		printf("\nDo u want to continue\n");
		scanf("%c", &choice);

	}while(choice == 'Y' || choice == 'y');
}
