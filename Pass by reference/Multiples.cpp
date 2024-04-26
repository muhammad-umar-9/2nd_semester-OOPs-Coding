#include<iostream>

using namespace std;

int multiple(int x, int y)
{
	if(x%y==0)
	{
		cout<< x <<" is multiple of "<< y <<endl;
	}
	
	else
	cout<< x <<" is not multiple "<< y << endl;
}
int main()
{
	int a,b;
	cin>>a>>b;
	multiple(a,b);
}