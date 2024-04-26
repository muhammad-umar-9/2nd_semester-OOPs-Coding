#include<iostream>

using namespace std;

int main()
{
	int arr[2]={1,3};
	
	int *ptr= &arr[0];
	
	cout<<ptr<<"  "<<*ptr<<endl<<"\n";
	
	cout<<(*ptr)++<<endl<<"\n"; //it will return value at zero and increment value not adress
	
	cout<<arr[0]<<" "<<arr[1]<<endl<<"\n"; //here at zero index it will give us 2 not 1 due to increment
	
	cout<<ptr<<" "<<*ptr<<endl; //here also give us incremented value 2 BUT ADRESS REMAIN SAME (ADRESS WILL NOT UPDATE)
	
}