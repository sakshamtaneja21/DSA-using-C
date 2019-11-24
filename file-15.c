//Pointers (18/9/19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int *ptr1, a, b;
	float *ptr2, c;
	printf("Enter A: ");	scanf("%d", &a);
	ptr1 = &a; //address of a
	printf("Value of A = %d, %d, %d\n", a, *ptr1, *(&a));
	printf("Address of A = %d, %d\n\n", &a, ptr1);
	printf("Enter B: ");	scanf("%d", &b);
	ptr1 = &b;
	printf("Value of B = %d, %d\n\n", b, *ptr1);
	printf("Enter C: ");	scanf("%f", &c);
	ptr2 = &c;
	printf("Value of C = %f, %f", c, *ptr2);
	getch();
}