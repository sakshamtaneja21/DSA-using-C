#include<stdio.h>

int main()
{

	char str[] = {"Limericks"};
	char *s;
	s = &str[6]-6;
	while(*s)
			  printf("%c" , *s++);

	


}
