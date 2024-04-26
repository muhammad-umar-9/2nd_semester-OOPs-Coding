#include<iostream>

using namespace std;

//Two methods but vector is more efficient for memory
/*
int Fibonacci(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	return(Fibonacci(n-1) + Fibonacci(n-2));
	
}
int main()
{
	int x,y;
	
	cout<<"Enter number to get Fibonacci sequence "<<endl;
	
	cin>>x;
	cout<<"Your Fibonacci sequence of "<< x <<" is: "<<endl;
	for (int i = 0; i <= x; i++){
	
	cout<<Fibonacci(i)<<endl; //for specific number just replace i by x
}
}
*/
//TO GET THE SEQUENCE FOR YOUR DESIRED NUMBER

/*
int main() {
  int fibonacci_length = 10;
  for (int i = 0; i < fibonacci_length; i++) {
    cout << Fibonacci(i) << endl;
  }
  return 0;
}
*/

// More efficient way to do this by vector

long Fibonacci(long n)
 { // long is a data type that can hold much larger values than int can.
   static vector<long>v = {0,1};

  if (n < v.size())
    return v.at(n);
  else {
    v.push_back(Fibonacci(n - 1) + Fibonacci(n - 2));  //push back is used to add new elements
    return v.at(n);
  }
}

int main() {
  int x;
  cout<<"Enter number to get Fibonacci sequence "<<endl;
  cin>>x;
  
    for (int i=0; i<x; i++) {
    cout << Fibonacci(i) << endl;
  }
  return 0;
}







