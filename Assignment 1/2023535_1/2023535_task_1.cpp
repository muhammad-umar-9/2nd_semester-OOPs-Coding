#include"2023535_definitions_1.cpp"
using namespace std;
int main()
{
	Person p1;
	
	cout<<"Enter your name"<<endl;
	getline(cin,p1.p_name);
	
	cout<<"Enter your  age"<<endl;
	cin>>p1.p_age;
	
	cout<<"Enter your city "<<endl;
	cin>>p1.p_adress.city;
	
	cout<<"Enter your street "<<endl;
	cin>>p1.p_adress.street;
	
	
	cout<<"Enter citizenship  1  for foreigner  2  for National "<<endl;
	cin>>nationality;
	
	if(nationality==1)
	{
		
		cout<<"Enter your visitor number and passport number "<<endl;
		cin>>p1.p_type.p_foreigner.f_visitorNo;
		cin>>p1.p_type.p_foreigner.f_passportNo;
	}
	else if(nationality==2)
	{
		
		cout<<"Enter your CNIC and Family Number "<<endl;
		cin>>p1.p_type.p_national.n_cnic;
		cin>>p1.p_type.p_national.n_familyNo;
	}
	
	cout<<"Enter your Gender  0  for male and  1 for female"<<endl;
	cin>>gender;
	
	GENDER choose;
	switch(gender)
	{
		case 0:
			choose = male;
			break;
		case 1:
		    choose = female;	
	}
	
	cout<<"In how many degrees you want to enroll "<<endl;
	cin>>degree;
	
	cout<<"Write your degree name"<<endl;
	for(int i=0; i<degree; i++)
	{
		cin>>p1.p_degrees[i];
	}
	system("cls");
	coutPersonRecord(p1);
	editPersonRecord(p1);
	coutPersonRecord(p1);

	
	return 0;
}

