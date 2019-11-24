//Sum of Array (21-8-19)
#include <stdio.h>
#include <conio.h>

void main() {
	printf("18BCAN024\n\n");
	int i, arr[10], sum=0;
	printf("Enter 10 numbers ");
	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++){
		sum = sum + arr[i];
	}
	printf("The Sum of Array is %d", sum);
	getch();
}