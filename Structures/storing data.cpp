#include<iostream>
using namespace std;

struct street_data
{
	int ID;
	string name;
	float bill;
	int mobile_num;
};



int main()
{
	struct street_data S;
	cout<<"Enter you Id, name , mess bill and mobile number"<<endl;
	cin>>S.ID>>S.name>>S.bill>>S.mobile_num;
	cout<<S.ID<<S.name<<S.bill<<S.mobile_num;
	return 0;
}