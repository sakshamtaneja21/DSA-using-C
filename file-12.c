//Bubble Sort (11-9-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[20], i, j, n, tmp;
	printf("Enter the No. of Elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-1-i; j++){
			if (arr[j] > arr[j+1]){
				tmp = arr[j];				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	printf("Sorted array is: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	getch();
}