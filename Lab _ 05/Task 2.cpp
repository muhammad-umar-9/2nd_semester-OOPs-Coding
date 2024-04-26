#include<iostream>
using namespace std;
class ARRAYS
{
	private:
	int * array1;
	int * array2;
	
	public:
		ARRAYS(int *arr1,int *arr2)    //constructor taking array as input
		{
			
			array1=new int [10];   //we allocate dynamic memeory
			array2=new int [10];
			for(int i=0; i<10; i++)
			{
				array1[i]=arr1[i];   //here we copy the elements of aar1 to Array 1
				array2[i]=arr2[i];
			}
		}
		ARRAYS(int *arr)   //here constructor takes the single input
		{
			array1=new int [10];
			array2=new int [10];
		
		for(int i=0; i<10; i++)
			{
				array1[i]=arr[i];
				array2[i]=arr[i];
			}
		}
		void sum()
		{
			int sum1=0;
			 int sum2 =0;
			for(int i=0; i<10; i++)
			{
				sum1+=array1[i];  //here we calculate the sum of array
				sum2+=array2[i];
			}
			cout<<"Sum of array 1 is: "<<sum1<<endl;
			cout<<"Sum of array 2 is: "<<sum2<<endl;
		}
		~ARRAYS()   //here we use destructor to delete the dynamic memory
		{
			delete[] array1;
			delete[] array2;
			cout<<"I am in destructor "<<endl;
		}
		
};
int main()
{
	int arr1[10]={3,4,5,6,1,2,3,4,5,1};
	int arr2[10]={1,2,3,4,5,6,7,8,9,10};
	ARRAYS a1(arr1 , arr2);  //here objects takes two arrays as parameter
	a1.sum();
	
	int array_C[10]={3,4,1,6,7,8,1,9,0,1};
	ARRAYS a2(array_C);
	a2.sum();
	return 0;
	
	
}