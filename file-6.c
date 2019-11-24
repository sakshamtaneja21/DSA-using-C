/*2D (3*4) Array (21-8-19)*/

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");+
	int arr[3][4], i, j;
	printf("Enter 12 numbers:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\nThe Array is:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	getch();
}