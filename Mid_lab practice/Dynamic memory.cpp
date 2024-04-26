#include<iostream>
using namespace std;
int main()
{
	int max = 5;
	
	int *a = new int[max];
	int n = max;
	
	char check;
	cout<<"Enter 5 values"<<endl;
	for(int i=0; i<max; i++)
	{
		cin>>a[i];
	}
	do
	{
		cout<<"Wanna enter more values (y/N)"<<endl;
		cin>>check;
		if(check == 'y' || check == 'Y')
		{
			max = max + 1;
			int * temp = new int [max];
			for(int i =0; i<n; i++)
			{
			
				temp[i] = a[i];
		}
		
		delete []a;
		a = temp ;
		
		cout<<"Enter more values "<<endl;
		cin>>a[n];
		n++;
	}

	else break;
}

	while (check == 'y' || check == 'Y');
	cout<<"Array Values"<<endl;
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
}