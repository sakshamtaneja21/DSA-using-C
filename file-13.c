//Selection Sort (11-9-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[20], i, j, n, tmp, min, pos;
	printf("Enter the No. of Elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: ", n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n-1; i++){
		min = arr[i];
		pos = i;
		for(j = i+1; j <= n-1; j++){
			if (min > arr[j]){
				min = arr[j];		pos = j;
			}
		}
		tmp = arr[pos];
		arr[pos] = arr[i];
		arr[i] = tmp;
	}
	printf("Sorted array is: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	getch();
}