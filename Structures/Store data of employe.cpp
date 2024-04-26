#include<iostream>

using namespace std;

struct adress
{
	char city[20];
	char house_no[10];
	char street[20];
};
struct employ
{
	int ID;
	char name[20];
	float salary;
	struct adress add;  //Nested structure
};
int  main()
{
	
	struct *sptr,employ;
	sptr=&employ;        //to print the adress of above structure
	cout<<sptr<<endl<<"\n";
	
	
	employ E;
	cout<<"Enter your ID, name , salary "<<endl;
	cin>>E.ID>>E.name>>E.salary;
	
	cout<<"Enter your City name, House No: , Street"<<endl;
	cin>>E.add.city>>E.add.house_no>>E.add.street;
	
	cout<<"Details of employee"<<endl;
	cout<<"Your ID is: "<<E.ID<<endl;
	cout<<"Your name is: "<<E.name<<endl;
	cout<<"Your salary is: "<<E.salary<<endl;
	cout<<"Your city name is: "<<E.add.city<<endl;
	cout<<"Your House No is: "<<E.add.house_no<<endl;
	cout<<"Your street is: "<<E.add.street<<endl;
}