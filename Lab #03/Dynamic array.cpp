#include<iostream>
using namespace std;
int * createarray(int size)
{
//	int * arr [size];
	int * arr = new int [size];
	for(int i=0; i< size; i++)
	{
		arr[i]=i+2;
	}
	return arr;
}
int main()
{
	int size = 10;
	int *result = createarray(size);
	for(int i=0; i<size; i++)
	{
		cout<<result[i]<<" ";
		//cout<<*result+i<<" ";
		//cout<<"Adresses "<<result + i;
		i++;
	}
	delete[] result;
	return 0;
}