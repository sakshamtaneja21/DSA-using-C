//Stack using Linked List (13-11-2019)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

void PUSH();
void POP();
void display();

struct node{
	int info;
	struct node *link;
};

typedef struct node node;
int val;
node *top = NULL, *ptr;

void PUSH(){
	printf("Enter value to PUSH: ");
	scanf("%d", &val);
	ptr = (node *)malloc(sizeof(node));
	ptr -> info = val;	ptr -> link = NULL;
	if (top == NULL){
		top = ptr;		ptr = NULL;
	}
	else{
		ptr -> link = top;
		top = ptr;
		ptr = NULL;
	}
}

void POP(){
	if(top == NULL)
		printf("Stack is Empty. Cannot POP");
	else
		top = top -> link;
		printf("Popped element is %d\n", val);
}

void display(){
	ptr = top;
	while(ptr != NULL){
		printf("%d ", ptr -> info);
		ptr = ptr -> link;
	}
	printf("\n");
}

void main(){
	printf("18BCAN024\n\n");
	int choice;
	printf("Enter 1 to PUSH.\n");
	printf("Enter 2 to POP.\n");
	printf("Enter 3 to display.\n");
	printf("Enter 0 to exit.\n");
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: PUSH();
				break;
			case 2: POP();
				break;
			case 3: display();
				break;
			case 0: exit(1);
			default: printf("Invalid Value!\n");
		}
	}
	getch();
}