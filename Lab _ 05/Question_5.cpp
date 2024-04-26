#include <iostream>
using namespace std;
int main() 
{
    int n,i;
    bool prime = true;
    cout<<"Enter a positive integer: ";
    cin>>n;
    // 0 and 1 are not prime numbers
    if (n==0 || n==1) 
	{
        prime = false;
    }
    // Loop to check if n is prime
    for(i = 2; i <= n/2; ++i)
	 {
        if(n % i == 0) 
		{
            prime = false;
            break;
        }
    }
    if(prime) 
	{
        cout << n << " is a prime number" << endl;
    } 
	else
	 
        cout << n << " is not a prime number" << endl;

    return 0;
}
