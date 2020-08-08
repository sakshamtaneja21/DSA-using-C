#include<stdio.h>
int SubSetSum(int *S, int n, int sum)
{
	if (sum ==0)
	return 1;
	
	if (n<0||sum<0)
	return 0;
	int inc=SubSetSum(S, n-1, sum-S[n]);
	
	int exc = SubSetSum(S, n-1, sum);
	
	return inc || exc;
}

int main()
{
	
	int S[] ={7,3,2,8,5};
	int n = sizeof(S)/sizeof(S[0]);
	
	int sum = 14;
	
	if (SubSetSum(S, n-1, sum))
	printf("yes");
	else
	printf("No");
	
}
