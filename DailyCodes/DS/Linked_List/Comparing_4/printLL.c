/*	Program 8 :
 *
 *	8] printLL()
*/


// 3 - Singly Circular LL
 
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

		printf("|%d|", temp->data);
	}
}

// 3 - Singly Circular LL

int printLL(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		node *temp = head;

		while(temp->next != head){
		
			printf("|%d|->", temp->data);

			temp = temp->next;
		}

		printf("|%d|", temp->data);
	}
}

// 4 - Doubly Circular LL

int printLL(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		node *temp = head;

		while(temp->next != head){
		
			printf("|%d|->", temp->data);

			temp = temp->next;
		}

		printf("|%d|", temp->data);
	}
}

