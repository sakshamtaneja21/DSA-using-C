//Sorting an Array (21-8-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[10], tmp, i, j;
	printf("Enter the elements:\n");
	for(i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < 10; i++){
		for(j = i+1; j < 10; j++){
			if(arr[i] > arr[j]){
				tmp = arr[i];		arr[i] = arr[j];
				arr[j] = tmp;
			}
		}}
	printf("Elements in ascending order are:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	getch();
}