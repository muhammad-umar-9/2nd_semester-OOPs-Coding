#include<iostream>
using namespace std;

class Result
{
	private:
		int marks1,marks2;
		char grade1,grade2;
	public:
	
	Result(int a, char f, int b , char v)
	{
		marks1=a;
		grade1=f;
		marks2=b;
		grade2=v;
	}
void show()
{
	cout<<"Marks of student 1 is "<< marks1 <<endl;
	cout<<"Grade of student 1 is "<< grade1<<endl;
	
	cout<<"Marks of student 2 is "<< marks2 <<endl;
	cout<<"Grade of student 2 is "<< grade2 <<endl;
}
		
};
int main()
{
	Result r1(20,'B', 40 ,'A' );
	r1.show();
	
	
	return 0;
}