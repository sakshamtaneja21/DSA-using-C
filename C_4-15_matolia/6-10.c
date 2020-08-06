#include<stdio.h>
int main()
{
	int a = 10, *p, **q;
	p= &a;
	q = &p;

	
	printf("%d\n", a);
	printf("%u\n", &a);
	printf("%u\n", p);
	printf("%u\n", &p);
	printf("%u\n", q);
	printf("%u\n", &q);
	printf("%u\n", **q);
	printf("%u\n", *q);
	printf("%u\n", *p);
	printf("%u\n", *(&a));

	return 0;

}
