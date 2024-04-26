#include<iostream>
using namespace std;

int RecursivePower(int base, int exp) 
{
  if (exp == 0) //base case
  {
    return 1;
  }
  else
   {
    return base * RecursivePower(base, exp - 1);  //recursive case
  }
}
int main()
{
	int x,y;
	
	cout<<"Enter base "<<endl;
	cin>>x;
	
	cout<<"Enter power "<<endl;
	cin>>y;
	
	cout<<"Your reult is: "<<RecursivePower(x,y);
}