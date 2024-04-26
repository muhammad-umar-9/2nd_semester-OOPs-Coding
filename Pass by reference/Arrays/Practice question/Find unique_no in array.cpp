#include<iostream>
using namespace std;
int main()
{
	int array[]={2,1,3,1,4,2,3};
	
	int length=sizeof(array)/sizeof(array[0]);
	
	for(int i=0; i<length; i++)
	{
	for(int j=i+1; i<length; j++)
	{
		if(array[i]==array[j])
		{
			array[i]=array[j]=-1;
		   }
      	}
	}
	
	for(int i=0; i<length; i++)
	{
		if(array[i]>0)
	{
		cout<<array[i];
	}
	}

	
}