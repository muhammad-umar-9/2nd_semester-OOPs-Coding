#include<iostream>

using namespace std;

int main()
{
	int array[5];
	int match_value;
	int key;
	cout<<"Enter elements of array"<<endl;
	
	for(int i=0; i<5; i++)
	{
		cin>>array[i];
	}
	
	cout<<"Enter key element to search it is present in array or not"<<endl;
	cin>>key;
	
	for(int i=0; i<5; i++)
	{
		if(array[i]==key)
		{
			match_value=i;
			break; //if condition meets true then it will not check further
		}
		else if(array[i]!=key)
		{
			match_value= -1; //means not present because arrays are zero index
		}
	}
	cout<<"your key element is present at index "<< match_value <<endl;
}