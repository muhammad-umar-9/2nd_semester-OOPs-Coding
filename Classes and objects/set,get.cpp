#include<iostream>
using namespace std;

class student
{
	private:
	int marks;
	public:
	void set_marks(int m)
	{
		marks=m;
	}	
	int get_marks()
	{
		return marks;
	}
};
int main()
{
	student s1;
	s1.set_marks(23);
	s1.get_marks(67);
}