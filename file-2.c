//Largest & Smallest number in an Array (21-8-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[10], i, large, small;
	printf("Enter 10 Numbers\n");
	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	large = arr[0];		small = arr[0];
	for (i = 0; i < 10; i++){
		if (arr[i] > large){
			large = arr[i];
		}
		if(arr[i] < small){
			small = arr[i];
		}
	}
	printf("Largest number is %d\n", large);
	printf("Smallest number is %d", small);
	getch();
}