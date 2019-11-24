//Linked Lists (9-10-19)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

void insert();
void display();
void insert_at_start();
void insert_after_value();
void sort_list();
void search();
void reverse();
void delete_first_node();
void delete_last_node();
void delete_node();

struct node{
	int info;
	struct node *link;
};
typedef struct node node; //rename struct node to node
node *start=NULL, *ptr, *nw;

void insert(){
	node *ptr, *nw;
	int val;
	printf("Enter value to be inserted: ");
	scanf("%d", &val);
	fflush(stdin);
	ptr = (node *)malloc(sizeof(node)); // * -- datatype
	ptr -> info = val;
	ptr -> link = NULL;
	if(start == NULL){
		start = ptr;	ptr = NULL;
	}
	else{
		nw = start;
		while (nw -> link != NULL){
			nw = nw -> link;
		}
		nw -> link = ptr;
	}
}

void insert_at_start(){
	node *ptr;
	int val;
	ptr = (node *)malloc(sizeof(node));
	printf("Enter value to insert: ");
	scanf("%d", &val);
	ptr -> info = val;
	ptr -> link = NULL;
	ptr -> link = start;
	start = ptr;
	ptr = NULL;
}

void insert_after_value(){
	node *ptr;
	int val1, val2, flag = 0;
	printf("Enter value to insert: ");
	scanf("%d", &val1);
	nw = (node *)malloc(sizeof(node));
	nw -> info = val1;
	nw -> link = NULL;
	printf("Enter value after which to insert new value: ");
	scanf("%d", &val2);
	ptr = start;
	while (ptr != NULL){
		if (ptr -> info == val2){
			flag = 1;
			break;
		}
		else
			ptr = ptr -> link;
	}
	if (flag == 0) {
		printf("Value Cannot be Inserted");
		exit(1);
	}
	else {
		nw -> link = ptr -> link;
		ptr -> link = nw;
	}
}

void sort_list(){
	node *i, *j;
	int temp;
	for (i = start; i -> link != NULL; i = i -> link){
		for (j = i -> link; j != NULL; j = j -> link){
			if (i -> info > j -> info){
				temp = i -> info;
				i -> info = j -> info;
				j -> info = temp;
			}
		}
	}
}

void search(){
	node *ptr;
	int val, flag=0, count=0;
	printf("Enter the value to search: ");
	scanf("%d", &val);
	ptr = start;
	while (ptr != NULL){
		count++;
		if(ptr -> info == val){
			flag = 1;
			break;
		}
		else{
			ptr = ptr -> link;
		}
	}
	if(flag == 0)
		printf("Value Not Present");
	else{
		printf("Position of Node = %d\n", count);
		printf("Address of Node = %d\n", ptr); //ptr -> info (to print value)
	}
}

void reverse(){
	node *prev, *next, *current;
	prev = NULL;
	next = NULL;
	current  = start;
	while(current != NULL){
		next = current -> link;
		current -> link = prev;
		prev = current;
		current = next;
	}
	start = prev;
}

void delete_first_node(){
	start = start -> link;
}

void delete_node(){
	node *ptr1, *ptr2;
	int val, flag = 0;
	printf("Enter value to delete: ", val);
	scanf("%d", &val);
   ptr1 = NULL;
   ptr2 = start;
	while(ptr2 != NULL){
		if (ptr2 -> info == val){
			flag = 1;
			break;
		}
		ptr1 = ptr2;
		ptr2 = ptr2 -> link;
	}
	ptr1 -> link = ptr2 -> link;
	ptr1 = NULL;
	ptr2 = NULL;
}

void delete_last_node(){
	node *ptr1, *ptr2;
	if (start == NULL)
		printf("The Linked List is Empty!\n");
	else if (start -> link == NULL){
		start = NULL;
		printf("Last remaining node deleted.\n");
	}
	else{
		ptr1 = start;
		while (ptr1 -> link != NULL){
			ptr2 = ptr1;
			ptr1 = ptr1 -> link;
		}
		ptr2 -> link = NULL;
		printf("Last node deleted.\n");
	}
}

void display(){
	node *temp;
	temp = start;
	printf("The Linked List is: ");
	while (temp != NULL){
		printf("%d ", temp -> info);
		temp = temp -> link;
	}
	printf("\n");
}

void main(){
	printf("18BCAN024\n\n");
	int choice;
	printf("Enter 1 to Create Linked List.\n");
	printf("Enter 2 to Insert new value at start.\n");
	printf("Enter 3 to Insert value after specific value.\n");
	printf("Enter 4 to Sort the Linked List.\n");
	printf("Enter 5 to Search the Linked List.\n");
	printf("Enter 6 to Reverse the Linked List.\n");
	printf("Enter 7 to Delete First value.\n");
	printf("Enter 8 to Delete specific value.\n");
	printf("Enter 9 to Delete Last value.\n");
	printf("Enter 0 to Display Linked List.\n");
	printf("Enter 11 to Exit.\n");
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: insert();
				break;
			case 2: insert_at_start();
				break;
			case 3: insert_after_value();
				break;
			case 4: sort_list();
				break;
			case 5: search();
				break;
			case 6: reverse();
				break;
			case 7: delete_first_node();
				break;
			case 8: delete_node();
				break;
			case 9: delete_last_node();
				break;
			case 0: display();
				break;
			case 11: exit(1);
				break;
			default: printf("Invalid Choice!\n");
		}
	}
	getch();
}