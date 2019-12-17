#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,d,s=0;
	cin>>a;
	while(a>0)
	{
		d=a%10;
		cout<<d;
		s=s+d;
		a=a/10;
	}
	cout<<endl;
	cout<<s;
}
