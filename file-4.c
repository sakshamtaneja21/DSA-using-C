//Linear Search of Array (21-8-19)

#include <stdio.h>
#include <conio.h>

void main(){
	printf("18BCAN024\n\n");
	int arr[10], i, s, r = 0;
	printf("Enter 10 numbers: ");
	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the element: ");
	scanf("%d", &s);
	for (i = 0; i < 10; i++){
		if(s == arr[i]){
			r = 1;
			printf("Position of element is %d", ++i);
		}
	}
	if(r == 0)
		printf("Element Not Found");
	getch();
}