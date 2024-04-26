#include<iostream>
using namespace std;
class Result
{	
	private:
	int marks[3];
	string name[3];
	int roll_no[3];
	public:
	void input();
	void display();
	int total();
	int average();
};
void Result::input()
{
	for(int i=0; i<3; i++)
	{
		cout<<"Roll_no, marks and name"<<endl;
		cin>>roll_no[i]>>marks[i]>>name[i];
	}
}
void Result::display()
{
	int sum=0;
	for(int i=0; i<3; i++)
	{
		cout<<"You Roll number , marks and name is "<<endl<<roll_no[i]<<endl<<marks[i]<<endl<<name[i]<<endl;
		sum=sum+marks[i];
	}
	cout<<"Your total marks are "<<sum;
	cout<<"Your avearge is "<<sum/3;
}



int main()
{
	Result s1;
	s1.input();
	s1.display();
}



