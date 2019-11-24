//Stack using Array (7-11-2019)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 10

void PUSH();
void POP();
void display();

int top = -1, stack[size], val;

void PUSH(){
	if(top == size-1)
		printf("Stack is Full. Cannot PUSH");
	else{
		printf("Enter value to PUSH: ");
		scanf("%d", &val);
		top = top + 1;
		stack[top] = val;
	}
}

void POP(){
	if(top == -1)
		printf("Stack is Empty. Cannot POP");
	else{
		val = stack[top];
		top = top - 1;
		printf("Popped element is %d\n", val);
	}
}

void display(){
	int i;
	for (i = top; i >= 0; i--){
		printf("%d ", stack[i]);
	}
	printf("\n");
}

void main(){
	printf("18BCAN024\n\n");
	int choice;
	printf("Enter 1 to PUSH.\n");
	printf("Enter 2 to POP.\n");
	printf("Enter 3 to display stack.\n");
	printf("Enter 4 to exit.\n");
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
			case 4: exit(1);
			default: printf("Invalid Value!\n");
		}
	}
	getch();
}