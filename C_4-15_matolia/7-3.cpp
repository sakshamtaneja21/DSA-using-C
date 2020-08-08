#include<string>
#include<iostream>
using namespace std;
int countstring(int n, int lastdigit)
{
	if(n==0)
	{
		return 0;

	}
	if(n==1)
	{
		if (lastdigit)
		return 1;
		else
		return 2;

	}
	
	if (lastdigit ==0)
	return countstring(n-1,0) + countstring(n-1,1);
	else
	return countstring(n-1,0);

}

int main()
{
	
	int n=4;
	
	cout<<countstring(n,0);
	
	
}
