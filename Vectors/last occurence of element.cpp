#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int x;
	int occurence=-1;
	vector<int>v(6);
	
	for(int i=0; i<v.size(); i++)
	{
		cin>>v[i];
	}
	
	cout<<"Enter x: "<<endl;
	cin>>x;
	
	for(int i=v.size()-1; i>=0; i--)
	{
		if(v[i]==x)
		{
			occurence=i;
			break;   //as we reverse it , so we break
		}
	}
	cout<<occurence;	
}