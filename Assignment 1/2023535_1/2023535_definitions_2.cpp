#include<iostream>
#include<string>
#include<conio.h>
#include<cstdlib>

using namespace std;

int nationality,g1,d,choice;  //Global variable to acces in main function and as well in Person_record function

struct Adress
{
	string city , street;
};

struct Foreigner
{
	int f_visitorNo , f_passportNo;
};

struct National
{
	int n_cnic , n_familyNo;
};

union PersonType
{
	Foreigner p_foreigner;
	National  p_national;
};

enum GENDER
{
	male=0 , female=1 
};

struct Person
{	
	string p_name;
	int p_age;
	Adress p_adress;
	PersonType p_type;
	GENDER p_gender;
	int option;
	string p_degrees[3];
};


int number_of_records;
Person person_Record[5];

void insertNewRecord(Person *person_Record, int number_of_records)
{
	cout<<"Kindly store the data "<<number_of_records<<" of persons"<<endl;
	if(number_of_records<=5)
	{
	
	for(int i=0; i<number_of_records; i++)
	{
	cout<<endl<<"---------Enter the data of "<< i+1 <<" Persons-------"<<endl;
	cout<<"Enter your name"<<endl;
	cin>>person_Record[i].p_name;
	
	cout<<"Enter your  age"<<endl;
	cin>>person_Record[i].p_age;
	
	cout<<"Enter your city "<<endl;
	cin>>person_Record[i].p_adress.city;
	
	cout<<"Enter your street "<<endl;
	cin>>person_Record[i].p_adress.street;
	
	
	cout<<"Enter citizenship  1  for foreigner  2  for National "<<endl;
	cin>>person_Record[i].option;
	
	if(person_Record[i].option==1)
	{
		cout<<"Enter your visitor number and passport number "<<endl;
		cin>>person_Record[i].p_type.p_foreigner.f_visitorNo;
		cin>>person_Record[i].p_type.p_foreigner.f_passportNo;
	}
	else if(person_Record[i].option == 2)
	{
		
		cout<<"Enter your CNIC and Family Number "<<endl;
		cin>>person_Record[i].p_type.p_national.n_cnic;
		cin>>person_Record[i].p_type.p_national.n_familyNo;
	}
	
	cout<<"Enter your Gender  0  for male and  1 for female"<<endl;
	cin>>g1;
	if(g1==0)
	{
		person_Record[i].p_gender=male;
	}
	else if(g1==1)
	{
		person_Record[i].p_gender=female;
	}
	
	
	cout<<"In how many degrees you want to enroll "<<endl;
	cin>>d;
	cout<<"Write your degree name"<<endl;
	for(int j=0; j<d; j++)
	{
		cin>>person_Record[i].p_degrees[j];
	}
	}
	}
	else
	{
		cout<<"Please enter value less than 5"<<endl;
	}
}

void showAllRecords(Person *person_Record)

 {
 	if(number_of_records<=5)
	{
	 
	 for(int i=0; i<number_of_records; i++)
	{
		cout<<"-----Record of "<<i+1<<" person-----"<<endl;
	cout<<"Your name is: "<<person_Record[i].p_name<<endl;
	cout<<"Your age is: "<<person_Record[i].p_age<<endl;
	cout<<"Your City  Name is: "<<person_Record[i].p_adress.city<<endl;
	cout<<"Your street name is:"<<person_Record[i].p_adress.street<<endl;
	
	if(person_Record[i].option==1)
	{
	cout<<"Your visitor number is: "<<person_Record[i].p_type.p_foreigner.f_visitorNo<<endl;
	cout<<"Your Passport number  is: "<<person_Record[i].p_type.p_foreigner.f_passportNo<<endl;
	}
    
	else if(person_Record[i].option==2)
	{
	cout<<"Your cnic number is: "<<person_Record[i].p_type.p_national.n_cnic<<endl;
	cout<<"Your family number is: "<<person_Record[i].p_type.p_national.n_familyNo<<endl;
	}
	

	if(person_Record[i].p_gender == male)
	{
		cout<<"You are male: "<<endl;
	}
	else if(person_Record[i].p_gender== female)
	{
		cout<<"You are female "<<endl;
	}
	cout<<"Your degrees which you are select for enrollment:"<<endl;
	
	for(int j=0; j<3; j++)
	{
		cout<<person_Record[i].p_degrees[j]<<endl;
	}
	}
	}
	else
	{
		cout<<"No output to show"<<endl;
	}
}