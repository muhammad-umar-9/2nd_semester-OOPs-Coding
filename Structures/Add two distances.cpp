#include<iostream>

using namespace std;

struct distance
{
	int feet;
	float inch;
}d1,d2,sum;

int main()
{
	cout<<"Enter first distance in feet "<<endl;
	cin>>d1.feet;
	cout<<"Enter 2nd distance in feet "<<endl;
	cin>>d2.feet;
	
	sum.feet=d1.feet+d2.feet;
	cout<<"Your sum is "<<sum.feet<<" feet"<<endl;
	
	cout<<"Enter first distance in inch "<<endl;
	cin>>d1.inch;
	cout<<"Enter 2nd distance in inch "<<endl;
	cin>>d2.inch;
	
	sum.inch=d1.inch+d2.inch;
	cout<<"Your sum is "<<sum.inch<<" inch"<<endl;
	
	cout<<"------------------"<<endl;
	cout<<"If your sum of feet is greater than 12 then your sum is below "<<endl;
	
	//Changing inches into feet
	
	if(sum.inch>12)  //as 1 feet = 12 inch 
	{
		int extra_feet=sum.inch/12;     // 1 inch(extra feet) =1/12 feet
		
		sum.feet=sum.feet+extra_feet;
		
		sum.inch = sum.inch - (extra_feet*12); 
		
		cout<<"Your feets are "<<sum.feet<<" feets and "<<" your inches are "<<sum.inch<<" inch "<<endl;
		
	}
	
	
}