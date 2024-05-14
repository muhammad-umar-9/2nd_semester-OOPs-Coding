#include<iostream>

using namespace std;

int main()
{
	int arr[2]={1,3};
	
	int *ptr= &arr[0];
	
	cout<<ptr<<"  "<<*ptr<<endl<<"\n";
	cout<<*ptr++<<endl<<"\n";  //first it return old value and then it will increment adress not value
	
	cout<<arr[0]<<" "<<arr[1]<<endl<<"\n";
	cout<<ptr<<" "<<*ptr<<endl; //as here it gives us next adress and gives us value at that adress
	
}