//Binary Search Tree (14-11-2019)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

void create();
void search();
void display();

struct Node{
	int info;
	struct node *left;
	struct node *right;
};
typedef struct Node node;
node *root = NULL, *ptr, *ptr1, *ptr2, *nw;
int val;

void create(){
	printf("Enter value to insert: ");
	scanf("%d", &val);
	ptr = (node *)malloc(sizeof(node));
	nw -> info = val;
	nw -> left = NULL;
	nw -> right = NULL;
	if (root == NULL){
		root = nw;
		nw = NULL;
	}
	else{
		ptr1 = root;
		ptr2 = NULL;
		while(ptr1 != NULL){
			if(ptr1 -> info > val){
				ptr2 = ptr1;
				ptr1 = ptr1 -> left;
			}
			else{
				ptr2 = ptr1;
				ptr1 = ptr1 -> right;
			}
		}
		if	(ptr2 -> info > val){
			ptr2 -> left = nw;
			nw = NULL;
		}
		else{
			ptr2 -> right = nw;
			nw = NULL;
		}
	}
}

void search(){
	node *loc = NULL;
	if(root == NULL)
		printf("Tree is Empty!\n");
	else{
		printf("Enter element to find: ");
		scanf("%d", &val);
	}

	if(root -> info == val){
		loc = root;
	}
	else if(val > root -> info)
		ptr = root -> right;
	else
		ptr = root -> left;

	while(ptr != NULL){
		if(ptr -> info == val){
			loc = ptr;
			break;
		}
		else if(val < ptr -> info)
			ptr = ptr -> left;
		else
			ptr = ptr -> right;
	}
	if(loc == NULL)
		printf("Element Not Found!");
	else
		printf("The node is at %d address.", loc);
}

void display(){
	ptr = root;
	while(ptr != NULL){
		printf("%d ", ptr -> info);
	}
	printf("\n");
}

void main(){
	printf("18BCAN024\n\n");
	int choice;
	printf("Enter 1 to create.\n");
	printf("Enter 2 to search the Tree.\n");
	printf("Enter 3 to display.\n");
	printf("Enter 0 to exit.\n");
	while(1){
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: create();
				break;
			case 2: search();
				break;
			case 3: display();
				break;
			case 0: exit(1);
			default: printf("Invalid Value!");
		}
	}
	getch();
}