/*	Program 6 :
 *
 *	6] deleteLast()
*/

// 1 - Singly LL

int deleteLast(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == NULL){
		
			free(head);
			head = NULL;
		}else{
		
			node *temp = head;

			while(temp->next->next != NULL){
			
				temp = temp->next;
			}

			free(temp->next);
			temp->next = NULL;
		}

		return 0;
	}
}

// 2 - Doubly LL

int deleteLast(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == NULL){
		
			free(head);
			head = NULL;
		}else{
		
			node *temp = head;

			while(temp->next->next != NULL){
			
				temp = temp->next;
			}

			free(temp->next);
			temp->next = NULL;
		}

		return 0;
	}
}


// 3 - Singly Circular LL

int deleteLast(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == NULL){
		
			free(head);
			head = NULL;
		}else{
		
			node *temp = head;

			while(temp->next->next != NULL){
			
				temp = temp->next;
			}

			free(temp->next);
			temp->next = head;
		}

		return 0;
	}
}


// 4 - Doubly Circular LL

int deleteLast(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		if(head->next == head){
			free(head);
			head = NULL;
		}else{
		
			head->prev = head->prev->prev;
			free(head->prev->next);
			head->prev->next = head;
		}

		return 0;
	}
}
