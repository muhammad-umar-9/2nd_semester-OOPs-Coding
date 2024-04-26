#include <iostream>
#include <string>
using namespace std;

// Base class
class Base
{
public:
    void Public(string s)
	 {
        cout << "Public function called with argument: " << s << endl;
    }
protected:
    void Protected(string s)
	 {
        cout << "Protected function called with argument: " << s << endl;
    }
};

// Derived class with protected inheritance
class Derived : protected Base
{
public:
    void ReturnPublic(string s) 
	{
        // Accessing public member function of Base class
        Public(s);
    }
    void ReturnProtected(string s) 
	{
        // Accessing protected member function of Base class
        Protected(s);
    }
private:
    string s_derived;
};

int main() 
{
    string s_main = "Hello";
    Derived dc;
    
    // Calling derived class function to access protected member function of Base
    dc.ReturnProtected(s_main);
    
    // Since ReturnPublic is a private member of Derived, it cannot be accessed from outside.
    // dc.ReturnPublic(s_main);

    return 0;
}
