/*	PRogram 2 :
 *
 *	2] addNode
*/

// 1 - Singly LL

void addNode(){

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
}

// 2 - Doubly LL
void addNode(){

	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node *temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;

		}

		temp->next = newNode;

		newNode->prev = temp;

	}
}

// 3 - Singly Circular LL

void addNode(){

	node *newNode = (node*)malloc(sizeof(node));

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
	}
}


//4 - Doubly Circular LL
void addNode(){

	node *newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		head->next = head;
		head->prev = head;
	}else{
		
/*		node *temp = head;
		
		while(temp->next != head){
		
			temp = temp->next;
		}

		temp->next = newNode;
		newNode->prev = temp;
		newNode->next = head;
		head->prev = newNode;
*/

		head->prev->next = newNode;		//Without using temp
		newNode->prev = head->prev;
		newNode->next = head;
		head->prev = newNoe;
	}
}


