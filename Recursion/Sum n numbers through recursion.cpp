#include<iostream>
using namespace std;

int FindSum(int n) {
  if (n <= 0)
   {
    return 0; //base case
  }
  else {
    return(n + FindSum(n-1)); //recursive case
  }
}
int main()
{
	int x;
	cout<<"Enter number to find sum"<<endl;
	cin>>x;
	
	cout<<FindSum(x);
}