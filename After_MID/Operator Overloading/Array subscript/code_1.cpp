#include<iostream>
using namespace std;

class Sub
{
	private:
	int arr[2];
	public:
	Sub(int a=0 , int b=0)
	{
		arr[0] = a;
		arr[1] = b;
	}	
	int & operator[](int position)
	{
		if(position == 0)
		return arr[0];
		else if(position == 1)
		return arr[1];
		else
		{
			cout<<"Out of bound "<<endl;
			exit(0);
		}
	}
	void display()
	{
		cout<<"X is: "<< arr[0] <<" "<<"Y is : "<< arr[1] <<endl;
		
	}
};
int main()
{
	Sub s1(1 , 2);
	s1.display();
	
	s1[0] = 7;
	s1[1] = 8;
	
	//s1.display();
	
	
}