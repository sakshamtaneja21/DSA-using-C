//Basic Array (21-8-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[10], i;
	printf("Enter 10 numbers: ");
	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	printf("The array is: ");
	for (i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	getch();
}