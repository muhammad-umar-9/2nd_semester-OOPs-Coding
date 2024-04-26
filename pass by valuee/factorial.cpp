#include<iostream>
using namespace std;

int factorial(int n)
{
	int z=1;
	for(int i=1; i<=n; i++)
	{
		z=z*i;
		
	}
   cout<<"factorial of "<< n << " is "<<z<<endl;
}

int main()
{
	int a;
	cout<<"Enter number"<<endl;
	cin>>a;
	factorial(a);
}