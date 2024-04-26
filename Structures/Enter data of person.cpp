#include<iostream>
using namespace std;

struct Person
{
	int age;
	string name;
	string cities[3];
	
};
enum field
{
	AI,CYS,CS,CE
}choose;
int main()
{
	Person p[2];
	int size = sizeof(p)/sizeof(p[0]);
	cout<<"Enter your Data "<<endl;
	cout<<"----------------------"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"Enter your age "<<endl;
		cin>>p[i].age;
		
		cout<<"Enter your name "<<endl;
		cin>>p[i].name;
	
		
		for(int j=0; j<3; j++)
		{
			cout<<"Enter your city name "<<j+1<<endl;
			cin>>p[i].cities[j];
		}
	}
	
	cout<<"--------------------------------------"<<endl;
	cout<<"Your Data is below "<<endl<<"\n";
	
	for(int i=0; i<size; i++)
	{
		cout<<"Your age is : "<<p[i].age<<endl;
		cout<<"Your name is : "<<p[i].name<<endl;
		
		cout<<"Your city names are "<<endl;
		for(int j=0; j<3;j++)
		{
			cout<<p[i].cities[j]<<endl;
		}
	}
}