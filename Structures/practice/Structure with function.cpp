#include<iostream>
using namespace std;

struct Person
{
	string name;
	int id;
	int reg_no;
};
Person display(Person p)  //if we want to return something then use our struct object as here it is person
                            //if we want to change something in display function and we see output in main function then we use & operator 

{
	cout<<"Your name is "<<p.name<<endl;
	cout<<"Your ID is "<<p.id<<endl;
	cout<<"Your Reg NO is "<<p.reg_no<<endl;
	
	p.name="Umar"; 
	
	return p;  //if we write viod then it show error
}

int main()
{
	Person p;
	cout<<"Input data "<<endl;
	cout<<"------------"<<endl;
	cout<<"Enter your name , Id , Reg_no "<<endl;
	cin>>p.name>>p.id>>p.reg_no;
	
	cout<<"Showing returned values from display function "<<endl;
	cout<<"-------------------------------------------"<<endl;
	
	display(p);  //it will display what we enter not modify value in the display function
	
	cout<<endl;
	cout<<"Showing values from main function "<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"Your name is "<<p.name<<endl;          //if we use (person &p) then here our name will be show which is write in that function because of pass by reference
	cout<<"Your ID is "<<p.id<<endl;
	cout<<"Your Reg NO is "<<p.reg_no<<endl;
	
	//from this it shows that from pass by value in memory both are store separately
	
	return 0;
}

