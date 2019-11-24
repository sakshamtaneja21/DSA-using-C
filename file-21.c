//Queue using Array (20-11-2019)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 10

void insert();
void del();
void display();
int front = -1, rear = -1, queue[size];

void insert(){
	int val;
	printf("Enter value to insert: ");
	scanf("%d", &val);
	if(front == 0 && rear == size - 1 || front == rear + 1)
		printf("Overflow of Queue");
	else if(rear == -1){
		rear = front = 0;
		queue[rear] = val;
	}
	else if(rear == size - 1){
		rear = 0;
		queue[rear] = val;
	}
	else{
		rear = rear + 1;
		queue[rear] = val;
	}
}

void del(){
	if (front == -1)
		printf("Underflow in Queue");
	else if(front == rear)
		front = rear = -1;
	else if(front == size - 1)
		front = 0;
	else
		front = front + 1;
}

void display(){
	int i;
	if(front <= rear){
		for (i = front; i <= rear; i++){
			printf("%d ", queue[i]);
		}
	}
	else{
		for(i = front; i <= rear; i++){
			printf("%d ", queue[i]);
		}
		for(i = 0; i <= rear; i++){
			printf("%d ", queue[i]);
		}
	}
	printf("\n");
}

void main(){
	printf("18BCAN024\n\n");
	int choice;
	printf("Enter 1 to insert.\n");
	printf("Enter 2 to delete.\n");
	printf("Enter 3 to display queue.\n");
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
			default: ("Invalid Choice!");
		}
	}
	getch();
}