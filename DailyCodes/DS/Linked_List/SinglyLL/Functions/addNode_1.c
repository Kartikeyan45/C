

/*
 	1] addNode() = addLast() and createNode()
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{

        int id;
        char name[20];

        struct Employee *next;
}Emp;

Emp *head = NULL;

Emp* createNode(){

        Emp *newNode = (Emp*)malloc(sizeof(Emp));

        printf("Enter Employee Id\n");
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

        Emp *newNode = createNode();

        if(head == NULL){
                head = newNode;
        }else{

                Emp *temp = head;

                while(temp->next != NULL){

                        temp = temp->next;
                }

                temp->next = newNode;
        }
}

void printLL(){

        Emp *temp = head;

        while(temp != NULL){

                printf("|Id is : %d -> ", temp->id);
                printf("Name is : %s |", temp->name);

                temp = temp->next;
        }
        printf("\n");
}

void main(){

        int NodeCount;
        printf("Enter Node Count\n");
        scanf("%d", &NodeCount);

        for(int i = 0; i < NodeCount; i++){

                addNode();
        }

        printLL();
}

