//Insertion Sort (11-9-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[20], i, j, n, key;
	printf("Enter the No. of Elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(i = 1; i < n; i++){
		key = arr[i];		j = i-1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];			j = j-1;
		}
		arr[j+1] = key;
	}
	printf("Sorted array is: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	getch();
}