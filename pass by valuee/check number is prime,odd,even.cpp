#include<iostream>
using namespace std;

int checknum(int x)
{
	int c=0;
	for(int i=2; i<x; i++)
	{
		if(x%i==0)
		c=1;
	}
	if(x%2==0 && c==0)
	{
		cout<<"number is even and prime"<<endl;
	}
	
	else if(x%2!=0 && c==0)
	{
		cout<<"number is odd and prime"<<endl;
	}
	else if(x%2==0 && c!=0)
	{
		cout<<"number is only even not prime"<<endl;
	}
	else if(x%2!=0)
	{
		cout<<"number is only odd not prime"<<endl;
	}
	else 
		cout<<"not a prime number"<<endl;
	
}
int main()
{
	int a;
	cout<<"Enter number to check odd or even or prime"<<endl;
	cin>>a;
	checknum(a);
}