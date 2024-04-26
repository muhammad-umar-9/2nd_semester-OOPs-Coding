#include<iostream>
using namespace std;

int presucess(int x)
{
	int u,v;
	u=x-1;
	v=x+1;
	cout<<"the precessor is "<<u<<endl;
	cout<<"the successor is "<<v<<endl;
}
int main()
{
	int a;
	
	cout<<"Enter number"<<endl;
	cin>>a;
	presucess(a);
}
