//Pointers (21-8-19)
#include <stdio.h>
#include <conio.h>

void main() {
	printf("18BCAN024\n\n");
	int n1, n2, *p1, *p2;
	printf("Enter 2 numbers ");
	scanf("%d%d", &n1, &n2);
	p1 = &n1;
	p2 = &n2;
	printf("The sum is %d", *p1+*p2);
	getch();
}