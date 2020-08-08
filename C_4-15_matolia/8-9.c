#include<stdio.h>

int main()
{

	char s[] = "C is a philosophy of life";
	char t[40];
	char *ss, *tt;
	ss = s;
	tt = t;
	
	while(*ss)
			{
			    *tt++ = *ss++;
         }
	*tt = '\0';
	printf("\n%s", t);






}
