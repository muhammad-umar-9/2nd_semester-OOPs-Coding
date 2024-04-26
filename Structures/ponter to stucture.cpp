#include<iostream>
using namespace std;

struct complex
{
	int real;
	float image;
};
int main()
{
	complex var1;
	
	complex * ptr=&var1;
	var1.real=5;
	var1.image=0.33;
    cout<<var1.real<<endl; //by simple cout
    
    //by taking input from user as pointer
    cout<<"Enter your complex number (real and imaginary part) "<<endl;
//    cin>>(*ptr).real>>(*ptr).image;   //(*ptr).real and var1.real are similar

//ptr->real is same as (*ptr).real

    cin>>ptr->real>>ptr->image;  //we can also take our input by using this
    
	cout<<"Real part is: "<< ptr->real<<endl<<"\n";  //by using pointer adress
	cout<<"complex part is: "<<ptr->image<<endl<<"\n";
}