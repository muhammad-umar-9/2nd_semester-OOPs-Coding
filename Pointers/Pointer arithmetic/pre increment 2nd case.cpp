#include<iostream>

using namespace std;

int main()
{
	int arr[2]={5,9};
	
	int *ptr= &arr[0];
	
	cout<<ptr<<"  "<<*ptr<<endl<<"\n";
	
	cout<<++*ptr<<"  " <<ptr<<endl<<"\n"; //it will update the VALUE only so, adress remain same
	
	cout<<arr[0]<<" "<<arr[1]<<endl<<"\n"; //as value at that adress incremented , so here value will be update 
	
	cout<<ptr<<" "<<*ptr<<endl; //here give us same adress and increment the value at that adress
	
}