#include<iostream>

using namespace std;

int main()
{
	int total,day,month;
	int day_of_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
    cout<<"Enter month number"<<endl;
	cin>>month;
	

	
	total=0; //we can give any random value
	
	for(int i =0; i<month; i++)
	{
		total=total + day_of_month[i];
	}
	cout<<"The number of days till "  << month <<" month in the year is "<<total<<endl;
}