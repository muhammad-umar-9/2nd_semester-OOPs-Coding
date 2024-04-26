#include<iostream>
using namespace std;

class Practice
{
	public:
	Practice()
	{
		cout<<"I am in constructor"<<endl;
	}	
};
int main()
{
	Practice p,q,r; //Constructor will be called as many times as objects are formed
}