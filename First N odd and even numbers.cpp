#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	for(i=1;i<=n;i++) //////////////first n even numbers
	{
		if(i%2==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	for(i=1;i<=n;i++) //////////////first n odd numbers
	{
		if(i%2!=0)
		{
			cout<<i<<" ";
		}
	}
	
	return 0;
}
