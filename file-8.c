/*Array of Structure (21-8-19)*/
/*store following info. of 2 students by using array of structure - Name/Roll No/Percentage*/

#include <stdio.h>
#include <conio.h>

struct student{
	int roll_no;	char name[16];	float percent;
};
void main(){
	printf("18BCAN024\n\n");
	struct student s[5];
	int i;
	for (i = 1; i <= 2; i++){
		printf("Enter information regarding Student %d:\n", i);
		scanf("%d%s%f", &s[i].roll_no, s[i].name, &s[i].percent);
	}	printf("\n");
	for (i = 1; i <= 2; i++){
		printf("Roll No = %d\t Name = %s\t Percentage = %f\n", s[i].roll_no, s[i].name, s[i].percent);
	}
	getch();
}