#include<iostream>
using namespace std;

int main()
{
	int row,coloumns;
	cout<<"Enter no of rows "<<endl;
	cin>>row;
	cout<<"Enter no of coloumns "<<endl;
	cin>>coloumns;
	int array[row][coloumns];
	cout<<"Enter elements of row and coloumns "<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<coloumns; j++)
		{
			cin>>array[i][j];
		}
	}
		for(int i=0; i<row; i++)
	{
		for(int j=0; j<coloumns; j++)
		{
		   cout<<array[i][j]<<" ";
		}
		cout<<endl;
		
	}cout<<endl;
}