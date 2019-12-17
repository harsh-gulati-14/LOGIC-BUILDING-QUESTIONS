#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	cin>>n;
	for(i=1;i<=n;i++) // with for loop
	{
		cout<<i<<endl;
	}
	int j=1;
	while(j<=n) // with while loop
	{
		cout<<j<<endl;
		j++;
	}
	i=n;
	do            // with do - while loop
	{
		cout<<i<<endl;
		i--;
	}
	while(i>=1);
	return 0;
}
