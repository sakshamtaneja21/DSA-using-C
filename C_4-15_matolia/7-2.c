#include<stdio.h>
int SubSetSum(int *S, int n, int sum)
{
	int T[n+1][sum + 1];
	
	for(int i=1; i<=0; i++)
	T[0][i] = 0;
	
	for(int i=0; i<=n; i++)
	T[0][i] = 1;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=sum; j++)
		{
			if (S[i-1]>j)
			T[i][j] = t[i-1][j];
			else
			T[i][j] = T[i-1][j]  || T[i-1][j-S[i-1]];
			
			
		}
	}
	return T[n][sum];
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
