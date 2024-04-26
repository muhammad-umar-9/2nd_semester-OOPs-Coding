#include<iostream>
using namespace std;

class Base
{
	public:
		int public_var;
	protected:
		int protected_var;
	private:
		int private_var;
	public:	
		Base()
		{
			public_var=0;
			protected_var=0;
			private_var=0;	
		}				
};
class Derived : private Base
{
	public:
	 void accessBaseMembers()
	  {
        // Public member of base class is accessible in the derived class
        cout << "Public member of base class: " << public_var << endl;
        
        // Protected member of base class is accessible in the derived class
        cout << "Protected member of base class: " << protected_var << endl;
        
        // Private member of base class is not accessible in the derived class
        // cout << "Private member of base class: " << private_var << endl; // This will cause a compilation error
    }
		
};
int main()
{
	Derived d1;
	d1.accessBaseMembers();
	return 0;
}