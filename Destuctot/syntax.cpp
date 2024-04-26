#include<iostream>
using namespace std;

class Check
{
	public:
		Check()
		{
			cout<<"I am in constructor"<<endl;
		}
	~Check()
	{
		cout<<"I am in destructor"<<endl;
	}
};
int main()
{
	Check c1;
}