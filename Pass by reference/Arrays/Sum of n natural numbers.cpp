#include<iostream>

using namespace std;

int main()
{
	int average;
	
	int array[5];
	
	int size = sizeof(array)/sizeof(array[0]);
	
	int sum=0; //identity element of addition (for product we use 1)
	
	cout<<"Enter elements to sum"<<endl;
	
	for(int i=0; i<5; i++)
	{
		cin>>array[i];
	}
	for(int i=0; i<5; i++)
	{
		sum=sum+array[i];
	}
	cout<<"your sum of element is "<< sum <<endl;
	
	average = sum / size;
	
	cout<<"Your average is "<< average <<endl;
	
}