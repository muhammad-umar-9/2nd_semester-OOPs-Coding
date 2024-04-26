#include<iostream>
using namespace std;
int main()
{
	int array[]={3,2,3,-4,5,-4,6,6,2};
	int length=sizeof(array)/sizeof(array[0]);
	for(int i=0; i<length; i++)
	{
		for(int j=i+1; j<length; j++)
		{
			if(array[i]==array[j])
			{
				array[i]=array[j]=-1; 
			}
		}
	}
	//another loop to print the single element in loop > 0
	for(int i=0; i<length; i++)
	{
		if(array[i]>0)
		{
			cout<<array[i];
		}
	}
	
}