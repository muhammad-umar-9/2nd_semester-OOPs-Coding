#include<iostream>
using namespace std;
/*
int largest_element(int array[],int length)
{
	int max=INT_MIN; //here we store our minimum value of array in max
	int max_index=-1;
	for(int i=0; i<length; i++)
	{
		if(array[i]>max) //to check every element 
		{
			max=array[i]; //store that greater element in max
			max_index=i; //this will store value of index
		}
	}
 
	return max_index; //this will give us index at which maximum value is present
}
*/
int second_largest(int array[],int length)
{
	int max=INT_MIN;
	int second_max=INT_MIN;
	for(int i=0; i<length; i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	
	for(int i=0; i<length; i++)
	{
		if(array[i]>second_max && array[i]!=max)
		{
			second_max=array[i];
		}
	}
	return second_max;
}


int main()
{
	int array[]={4,6,9,2,8,7,9};
	int length = sizeof(array)/sizeof(array[0]);
	//MORE CONVEINIENT WAY

	cout<<second_largest(array,length)<<endl;
	
	
	
	
	//less convieniet way
	/*  
	int largest_index=largest_element(array, length);
    cout<<"Index of largest element is: "<<largest_index<<endl;
    
	 //if we want to print the value then use array[largest_index]
	 
	cout<<" largest element is: "<<array[largest_index]<<endl<<"\n";
	
	//only check for largest element then here our code ends
    
    //Move further for 2nd largest element
    
    //array[largest_index]=-1;
    
    int largest_element1 = array[largest_index]; //we store our largest element in another variable
    
    for(int i=0; i<length; i++)
    {
    	if(array[i]==largest_element1)
    	{
    		array[i]=-1;
		}
	}
    
    int  second_largest_index=largest_element(array, length);
    
    cout<<"Index of 2nd largest element is: "<<second_largest_index<<endl;  
	
	 //if we want to print the value then use array[second_largest_index]
	 cout<<" 2nd largest element is: "<<array[second_largest_index]; 
	 */
}