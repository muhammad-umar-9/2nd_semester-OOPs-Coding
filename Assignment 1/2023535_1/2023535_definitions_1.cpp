#include<iostream>
#include<string>
#include<conio.h>
#include<cstdlib>
using namespace std;

int nationality,gender,degree,choice;  //Global variable to acces in main function and as well in Person_record function

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
	string p_degrees[3];
	int Person_Record[5];
};
void coutPersonRecord(Person person)
{
	cout<<"Your name is: "<<person.p_name<<endl;
	cout<<"Your age is: "<<person.p_age<<endl;
	cout<<"Your City  Name is: "<<person.p_adress.city<<endl;
	cout<<"Your street name is:"<<person.p_adress.street<<endl;
	
	if(nationality==1)
	{
	cout<<"Your visitor number is: "<<person.p_type.p_foreigner.f_visitorNo<<endl;
	cout<<"Your Passport number  is: "<<person.p_type.p_foreigner.f_passportNo<<endl;
	}
	else if(choice == 1)
	{
	cout<<"You are Foreigner"<<endl;	
	cout<<"Your visitor number is: "<<person.p_type.p_foreigner.f_visitorNo<<endl;
	cout<<"Your Passport number  is: "<<person.p_type.p_foreigner.f_passportNo<<endl;
	}
	else if(choice == 2)
	{
	cout<<"You are National"<<endl;
	cout<<"Your cnic number is: "<<person.p_type.p_national.n_cnic<<endl;
	cout<<"Your family number is: "<<person.p_type.p_national.n_familyNo<<endl;
	}
	else
	{
	cout<<"Your cnic number is: "<<person.p_type.p_national.n_cnic<<endl;
	cout<<"Your family number is: "<<person.p_type.p_national.n_familyNo<<endl;
	}

	if(gender == 0)
	{
		cout<<"You are -> male: "<<endl;
	}
	else 
	{
		cout<<"You are -> female "<<endl;
	}
	cout<<"Your degrees which you are select for enrollment:"<<endl;
	
	for(int i=0; i<3; i++)
	{
		cout<<person.p_degrees[i]<<endl;
	}	
}

void editPersonRecord(Person &person)
{
	int selection,variable;

	cout<<"how many variables you want to edit from above ";
	cin>>variable;

	for(int i=0; i<variable; i++)
	{
	cout<<"IF YOU WANT TO EDIT YOUR DETAILS THEN PRESS"<<endl;
	cout<<"->1 for edit   name "<<endl;
	cout<<"->2 for edit   age  "<<endl;
	cout<<"->3 for edit  city  "<<endl;
	cout<<"->4 for edit street "<<endl;
	cout<<"->5 for nationality "<<endl;
	cout<<"->6 for edit degree "<<endl;
    cin>>selection;
	
	if(selection == 1)
	{
		cout<<"Edit Your name "<<endl;
		cin>>person.p_name;
	
	}
	else if(selection == 2)
	{
		cout<<"Edit your age "<<endl;
		cin>>person.p_age;
	}
	else if(selection == 3)
	{
		cout<<"Edit your city name "<<endl;
	    cin>>person.p_adress.city;
	}
	else if(selection == 4)
	{
		cout<<"Edit your street name "<<endl;
		cin>>person.p_adress.street;
	}
	else if(selection == 5)
	{
		
		cout<<"if you want change nationality then enter 1 for foreigner or 2 for national"<<endl;
		cin>>choice;
		
	      if(choice == 1)
		{
			cout<<"Edit your visitor and Passport number"<<endl;
			cin>>person.p_type.p_foreigner.f_visitorNo;
			cin>>person.p_type.p_foreigner.f_passportNo;
		}
		else if(choice == 2)
		{
			cout<<"Edit your CNIC and Family number"<<endl;
			cin>>person.p_type.p_national.n_cnic;
			cin>>person.p_type.p_national.n_familyNo;
		}
	}
	else if(selection==6)
	{
		cout<<"Edit your degree "<<endl;
		cout<<"How many degree do you want to change "<<endl;
		cin>>degree;
		for(int i=0; i<degree; i++)
		{
			cin>>person.p_degrees[i];
		}
	}
	else
	{
		cout<<"Invalid entry"<<endl;
	}
	
}  

}