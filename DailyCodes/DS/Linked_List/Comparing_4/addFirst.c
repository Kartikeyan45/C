/*	Program 3 :
 *
 *	3] addFirst
*/

// 1 - Singly LL

void addFirst(){

	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;	
	}
}

// 2 - Doubly LL

void addFirst(){

	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

// 3 - Singly Circualr LL

void addFirst(){

	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		newNode->next = head;
	}else{
	
		node *temp = head;

		while(temp->next != head){
		
			temp = temp->next;
		}

		temp->next = newNode;
		newNode->next = head;
		head = newNode;
	}
}

// 4 - Doubly Circular LL

void addFirst(){

	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		head->next = head;
		head->prev = head;

	}else{
	
		newNode->next = head;
		newNode->prev = head->prev;
		head->prev->next = newNode;
		head->prev = newNode;
		head = newNode;
	}
}
