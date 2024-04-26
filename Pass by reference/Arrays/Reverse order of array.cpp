#include<iostream>

using namespace std;

int main()
{
	int array[5];
	
	int length=sizeof(array)/sizeof(array[0]);
	
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<length; i++)
	{
		cin>>array[i];
	}
	
	cout<<"The array in actual order"<<endl;
	
	for(int i=0; i<length; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<"\n The array in reverse order"<<endl;
	for(int i=length-1; i>=0; i--) //as array are zero index so,last element should be length - 1
	{
		cout<<array[i]<<" ";
	}
}