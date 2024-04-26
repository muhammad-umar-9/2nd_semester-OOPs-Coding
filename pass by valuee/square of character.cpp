#include<iostream>
using namespace std;

char shape(int y, char x)
{
	for(int i=0; i<=y; i++)
	{
		for(int j=0; j<=y; j++)
		{
			cout<<x;
		}
		cout<<endl;
	}
}
int main()
{
	
	int num;
	char c;
	cout<<"Enter number"<<endl;
	cin>>num;
	cout<<"Enter character to get shape"<<endl;
	cin>>c;
	shape(num,c);
	
	
	
}