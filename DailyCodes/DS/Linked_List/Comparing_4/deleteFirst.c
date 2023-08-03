/*	Program 5 :
 *
 *	5] deleteFirst()
*/


// 1 - Singly LL
int deleteFirst(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == NULL){
		
			free(head);
			head = NULL;
		}else{
		
			node *temp = head;

			head = head->next;		//1 way
			head = temp->next;		//2 way

			free(temp);
		}

		return 0;
	}
}

// 2 - Doubly LL

int deleteFirst(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == NULL){
		
			free(head);
			head = NULL;
		}else{

			head = head->next;		
			free(head->prev);
			head->prev = NULL;
		}

		return 0;
	}
}


// 3 - Singly Circular LL

int deleteFirst(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == head){
		
			free(head);
			head = NULL;
		}else{
		
			node *temp = head;

			head = head->next;		//1 way
			free(temp->next);

			temp->next = NULL;
			head->next->next = head;
		}

		return 0;
	}
}


// 4 - Circular Doubly LL

int deleteFirst(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == head){
		
			free(head);
			head = NULL;
		}else{
		
			head->next->prev = head->prev;
			head = head->next;
			free(head->prev->next);
			head->prev->next = head;
		}

		return 0;
	}
}
