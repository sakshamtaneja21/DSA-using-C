//Linear Search (4-9-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[50], i, n, val, pos, flag = 0;
	printf("Enter the no. of elements in Array: ");
	scanf("%d", &n);
	printf("Enter %d elements in Array:\n", n);
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be found: ");
	scanf("%d", &val);
	for (i = 0; i < n; i++){
		if (arr[i] == val){
			flag = 1;			pos = i;			break;
		}
	}
	if (flag == 0)
		printf("Element not found!");
	else
		printf("The element is at %d position.", pos+1);
		getch();
}