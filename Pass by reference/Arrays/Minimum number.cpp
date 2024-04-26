#include<iostream>

using namespace std;

int main()
{
	int array[5];
	
	cout<<"Enter elements to show Max No:"<<endl;
	
	for(int i=0; i<5; i++)
	{
		cin>>array[i];
	}
	
	int min=array[0];  //we can't write it at top(then it will give us garbage value) because we write it after input
	                  //we assign that let our first value is minimum
	
	for(int i=0; i<5; i++)
	{
		if(min>array[i])  //it checks if any element is greater than first element of array then it again check until 
		                 //element become smaller than first
		{
			min=array[i]; //then it will assign smallest value to min variable
			
		}
	}
	cout<<"your Min NO: is "<< min <<endl;
}