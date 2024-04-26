#include<iostream>

using namespace std;

int Factorial(int n) {
  if (n <= 0) 
  { //base case (where the function stops calling itself and returns a value).
    return 1;
  }
  else
   { //recursive case (where the function calls itself with a different parameter) 
    return n * Factorial(n - 1);
  }
}
int main()
{
	int x;
	cout<<"Enter element for factorial"<<endl;
	cin>>x;
	cout<<"\nFactorial of  "<< x << " is: "<<Factorial(x);
}

