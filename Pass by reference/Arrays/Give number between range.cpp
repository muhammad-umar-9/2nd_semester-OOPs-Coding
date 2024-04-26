#include<iostream>

using namespace std;

int main()
{
	int n;
	
	int temp=0;
	
	int age[5];  //This number should be greater than "n" input otherwise loop will become infinite 
	            //This shows that how many persons ages do you want to examine
	
	cout<<"Enter number of  persons"<<endl;
	cin>>n;
	
	cout<<"Enter ages of "<< n << "persons"<<endl;
		
for(int i=0; i<n; i++)
{
	cin>>age[i]; //enter ages of persons
	
	if(age[i]>=50 && age[i]<=60)
	{
		temp++;
	}
}
cout<<"The person between 50 and 60 = "<<temp;
}