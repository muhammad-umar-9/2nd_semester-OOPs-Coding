#include<iostream>
using namespace std;
int main()
{
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);
	int k=2; //varibale that how many time rotate the array

//if i can change our value from k=2 to k=7 then it will give me the same result as 7%5=2 , so it will rotate two times

	k=k%size; //k can be greater than our size of array
      int array1[5]; //an empty array to store elements after rotating array
	int j=0; //to store elements

     //inserting last elements at first position

	for(int i=size-k; i<size; i++)
	{
         array1[j++]=array[i];
	}

	for(int i=0; i<=size; i++)
	{
		array1[j++]=array[i];
	}

	for(int i=0; i<size; i++)
	{
		cout<<array1[i]<<" ";
	}
	cout<<endl;
}