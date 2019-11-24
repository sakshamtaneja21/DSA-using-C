/*Structure (21-8-19)*/
/*Store the following info. of 2 students by using structure - Name/Roll No/Percentage*/

#include <stdio.h>
#include <conio.h>

struct student{
	int roll_no;
	char name [16];
	float percent;
};

void main(){
	printf("18BCAN024\n\n");
	struct student s1, s2;
	printf("Enter Roll no, Name & Percentage of Student 1: ");
	scanf("%d %s %f", &s1.roll_no, s1.name, &s1.percent);
	printf("Enter Roll no, Name & Percentage of Student 2: ");
	scanf("%d %s %f", &s2.roll_no, s2.name, &s2.percent);
	getch();
}