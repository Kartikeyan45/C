/*	Program 4 :
 *
 *	4] addAtPos
*/


// 1 - Singly LL
int addAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 ||  pos >= count+2){
	
		printf("Invalid Pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			addFirst();
		}else if(pos == count + 1){
		
			addLast();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			node *newNode = createNode();

			newNode->next = temp->next;
			temp->next = newNode;
		}
		return 0;
	}
}

// 2 - Doubly LL

int addAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 ||  pos >= count+2){
	
		printf("Invalid Pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			addFirst();
		}else if(pos == count + 1){
		
			addLast();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			node *newNode = createNode();

			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;

		}

		return 0;
	}
	
}

// 3 - Singly Circular LL


int addAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 ||  pos >= count+2){
	
		printf("Invalid Pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			addFirst();
		}else if(pos == count + 1){
		
			addLast();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			node *newNode = createNode();

			newNode->next = temp->next;
			temp->next = newNode;

		}
		
		return 0;
	}

}

// 4 - Doubly Circular LL

int addAtPos(int pos){

	int count = countNodes();

	if(pos <= 0 ||  pos >= count+2){
	
		printf("Invalid Pos to insert\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			addFirst();
		}else if(pos == count + 1){
		
			addLast();
		}else{
		
			node *temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			node *newNode = createNode();

			newNode->next = temp->next;
			temp->next->prev = newNode;
			temp->next = newNode;
			newNode->prev = temp;
		}

		return 0;
	}
}




