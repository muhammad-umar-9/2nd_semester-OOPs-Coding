#include<iostream>
using namespace std;

struct time_differnce
{
	int second,minute,hour;
}t1,t2,diff;

int main()
{
	cout<<"Enter time in second , minute , hour "<<endl;
	cin>>t1.second>>t1.minute>>t1.hour;
	
	cout<<"Enter for 2nd time in second , minute , hour "<<endl;
	cin>>t2.second>>t2.minute>>t2.hour;
	
	// Normalize the time difference
    if (t1.second < t2.second)
    {
        t1.second = t1.second +60;  //here we take 60 second from 1 minute
        t1.minute--;   //the we decrement the minute
    }

    if (t1.minute < t2.minute)
    {
        t1.minute =t1.minute + 60; //here we take 60 minutes from 1 hour
        t1.hour--;    //then we decrement the hour
    }
	
	
	diff.second=t1.second-t2.second;
	diff.minute=t1.minute-t2.minute;
	diff.hour=t1.hour-t2.hour;
	
	cout<<"Your time difference is "<<diff.second<<" "<<diff.minute<<" "<<diff.hour<<endl;
	
	
	return 0;
}