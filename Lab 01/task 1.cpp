#include<iostream>
using namespace std;

int main()
{
	
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	
	//NORMAL WAT TO DO THIS
	cout<<"Adress of array is: "<<&arr[0]<<endl;
	int *ptr=&arr[0];
	int *ptr1=&arr[1];
	int *ptr2=&arr[2];
	int *ptr3=&arr[3];  //and so on
	
	cout<<"Value at that adress is: "<<*ptr<<endl<<"\n";
	
	cout<<"Adress of array is: "<<&arr[1]<<endl;
	cout<<"Value at that adress is: "<<*ptr1<<endl<<"\n";
	
	cout<<"Adress of array is: "<<&arr[2]<<endl;
	cout<<"Value at that adress is: "<<*ptr2<<endl<<"\n";
	
	cout<<"Adress of array is: "<<&arr[3]<<endl;
	cout<<"Value at that adress is: "<<*ptr3;
	
	
	
	//and so on
	
	//MORE FORMAL WAY TO DO THIS
/*	
	int *ptr=arr;
	
	for(int i=0; i<10; i++)
	{
		cout<<"The adress of  "<<arr[i]<<"  "<<&arr[i]<<endl;
		cout<<"The value at that adress is : "<<*ptr<<endl<<"\n";
		ptr++;
	}
	*/
}