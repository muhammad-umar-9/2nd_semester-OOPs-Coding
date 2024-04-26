#include<iostream>

using namespace std;

int main()
{
	int array[5]={2,3,5,1,4};
	int target_sum=5;
	int length=sizeof(array)/sizeof(array[0]);
	int pair=0;
	for(int i=0; i<length ; i++)
	{
		for(int j=i+1; j<length; j++)
		{                             //we use nested loop
		   if( array[i]+array[j]==target_sum)
			{
				pair++;
			}
		}
	}
	cout<<pair;
	return 0;
}