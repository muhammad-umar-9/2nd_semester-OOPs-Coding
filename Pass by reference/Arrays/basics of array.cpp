#include<iostream>

using namespace std;

int main()
{
	int array[]={1,2,3,4,5,6};
	
//	cout<<sizeof(array)<<endl;  //tell how much memory store
//	
//	cout<<sizeof(array)/sizeof(array[0])<<endl;  //length of array
	
	int length = sizeof(array)/sizeof(array[0]);
	
	//for loop
	
	/*
	cout<<"Elements of for loop\n"<<endl;
	
	for(int idx=0; idx<length; idx++)  //to print out every element of array
	{
		cout<<array[idx]<<" "; //we can also use [*(array+i)] by using pointers adresses it will give us same result
	}
	cout<<endl;
	*/
	//For each loop
	
	/*
	cout<<"Elements of for Each loop\n"<<endl;
	
	for(int element:array)   
	{
		cout<<element<<endl; //it will traverse each element
	}
	*/
	
	//While Loop
	/*
	cout<<"Elements of While loop\n"<<endl;
	
	int index=0;
	while(index<length)
	{
		cout<<array[index]<<endl;
		index++;
	}
	*/
	
	//taking input from user  using for loop
	/*
	
	char alphabets[5];
	
	cout<<"Enter alphabets to print"<<endl;
	
	for(int i=0; i<5; i++)  //for loop for taking input
	{
		cin>>alphabets[i];
	}
	cout<<"Your alphabets are"<<endl;
	
	for(int i=0; i<5; i++) //for loop for print
	{
		cout<<alphabets[i]<<endl;
	}
	*/
	
	//taking input from user  using for Each loop
	
	
	char alphabets[5];
		
	cout<<"Enter alphabets to print"<<endl;
	
	for(char &element:alphabets) //here we use ampercent operator
	{
		cin>>element;
	}
	
	cout<<"Your alphabets are"<<endl;
	
	for(int i=0; i<5; i++) //for loop for print
	{
		cout<<alphabets[i]<<" ";
	}
	cout<<endl;
	
}