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
	
	int Max=array[0]; //we assign that let our first value is maximum
	
	for(int i=0; i<5; i++)
	{
		if(array[i]>Max) //it checks if any element is greater than first element of array
		{
			Max=array[i];  //then assign that value to our max variable
			
		}
	}
	cout<<"your Max NO: is "<< Max <<endl;
}