//Queue using Linked List (13-11-19)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

void insert();
void del();
void display();

struct node{
	int info;
	struct node *link;
};
typedef struct node node;
int val;
node *front = NULL, *rear = NULL, *ptr;

void insert(){
	printf("Enter value to insert: ");
	scanf("%d", &val);
	ptr = (node *)malloc(sizeof(node));
	ptr -> info = val;
	ptr -> link = NULL;
	if (rear == NULL){
		front = rear = ptr;
		ptr = NULL;
	}
	else{
		rear -> link = ptr;
		rear = ptr;
		ptr = NULL;
	}
}

void del(){
	if(front == NULL)
		printf("Queue is Empty. Cannot delete");
	else
		front = front -> link;
		printf("Deleted element is %d\n", val);
}

void display(){
	ptr = front;
	while(ptr != NULL){
		printf("%d ", ptr -> info);
		ptr = ptr -> link;
	}
	printf("\n");
}

void main(){
	printf("18BCAN024\n\n");
	int choice;
	printf("Enter 1 to insert value in Queue.\n");
	printf("Enter 2 to delete value from Queue.\n");
	printf("Enter 3 to display the Queue.\n");
	printf("Enter 0 to exit.\n");
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: insert();
				break;
			case 2: del();
				break;
			case 3: display();
				break;
			case 0: exit(1);
			default: printf("Invalid Value!");
		}
	}
	getch();
}