/*	Program 7 :
 *
 *	7] deleteAtPos
*/


// 1 - Singly LL
int deleteAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 || pos > count){
	
		printf("Invalid pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			deleteFirst();

		}else if(pos == count){
		
			deleteLast();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			node *temp1 = temp->next;
			temp->next = temp->next->next;
			free(temp1);
		}

		return 0;
	}
}

// 2 - Doubly LL

int deleteAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 || pos > count){
	
		printf("Invalid pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			deleteFirst();

		}else if(pos == count){
		
			deleteLast();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
		}

		return 0;
	}
}


// 3 - Singly Circular LL

int deleteAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 || pos > count){
	
		printf("Invalid pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			deleteFirst();

		}else if(pos == count){
		
			deleteLast();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}
			
			node *temp1 = temp->next;
			temp->next = temp->next->next;
			free(temp1);
		}

		return 0;
	}
}


// 4 - Doubly Circular LL

int deleteAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 || pos > count){
	
		printf("Invalid pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			deleteFirst();

		}else if(pos == count){
		
			deleteLast();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
		}

		return 0;
	}
}
