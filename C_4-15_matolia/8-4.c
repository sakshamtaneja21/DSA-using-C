#include<stdio.h>

int main()
{

	char str[] = {48, 48, 48, 48, 48};
	char *s;
	int i;
	s = str;
	for(i=0; i<5; i++)
	{
		if (*s)
		      printf("%c", *s);
		s++;
	}
	   
	
}
