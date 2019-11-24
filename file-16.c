//Arrays using Pointers (18/9/19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int *p, a[5], i;
	p = a; //base address of array
	printf("Enter 5 elements in Array:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", p+i);
	}
	printf("Elements of Array:\n");
	for(i = 0; i < 5; i++){
		printf("%d ", *(p+i));
	}
	getch();
}