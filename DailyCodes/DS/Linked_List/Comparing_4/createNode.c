/*	PRogram 1 :
 *
 *	1] CreateNode
*/

// 1 - Singly LL

node *createNode(){

	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

// 2 - Doubly LL

node *createNode(){

	node *newNode = (node*)malloc(sizeof(node));

	newNode->prev = NULL;				//extra

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

// 3 - Singly Circular LL
node *createNode(){

	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter Data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;		//same as Singly LL
	
	return newNode;
}

// 4 - Doubly Circular LL

node *createNode(){

	node *newNode = (node*)malloc(sizeof(node));
	
	newNode->prev = NULL;			//extra

	printf("Enter Data\n");		
	scanf("%d", &newNode->data);

	newNode->next = NULL;				

	return newNode;

}

