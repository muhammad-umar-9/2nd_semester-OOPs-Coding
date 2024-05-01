#include<iostream>
using namespace std;

class Array
{
	private:
		int *arr;
		int size;
	public:
	Array(int s)
	{
		size = s;
		arr = new int [size];
		for(int i=0; i<size; ++i)
		{
			arr[i] = -1;
		}
	}	
	void input()
	{
		cout<<"Enter "<< size <<" number of array "<<endl;
		
		for(int i=0; i<size; i++)
		{
			cin>>arr[i];
		}
	}
	void output()
	{
		for(int i=0; i<size; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	bool operator == (const Array &a)
	{

		for(int i=0; i<size; ++i)
		{
			if(arr[i] != a.arr[i])
			return false;
		}
		return true;
	}
		
};
int main()
{
	int size;
	cout<<"Enter size of your array ";
	cin>>size;
	
	Array A_1(size) , A_2(size);
	
	A_1.input();
	
	A_2.input();
	
	cout<<"Elements of first array "<<endl;
	A_1.output();
	
	cout<<"Elements of 2nd array "<<endl;
	A_2.output();
	
	if(A_1 == A_2)
	{
		cout<<"Both objects are same "<<endl;
		
	}
	else
	cout<<"Both objects are not same ";
	
	return 0;
	
}




