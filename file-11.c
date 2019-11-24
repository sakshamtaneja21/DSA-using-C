//Binary Search (4-9-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[50], i, n, high, low, val, mid, pos, flag=0;
	printf("Enter the no. of elements in Array: ");
	scanf("%d", &n);
	printf("Enter %d elements in Array in ascending order:\n", n);
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be found: ");
	scanf("%d", &val);
	high = n-1; 	low = 0;
	while(low <= high){
		mid = (low + high)/2;
		if(arr[mid] == val){
			pos = mid;			flag = 1;
			break;
		}
		else if (val > arr[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	if (flag == 1)
		printf("The element is at %d position.", pos+1);
	else
		printf("Element Not Found!");
	getch();
}