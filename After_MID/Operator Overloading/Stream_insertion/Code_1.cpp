#include<iostream>
using namespace std;

class Insert
{
	private:
	int x;
	public:
		Insert(int a=0)
		{
			x = a;
		}
	friend istream& operator >> (istream& input , Insert& num);
	friend ostream& operator << (ostream& output , Insert& num);	

};
	istream& operator >> (istream& input , Insert& num)
	{
		input >> num.x;
		return input;
	}		
	ostream& operator << (ostream& output , Insert& num1)
	{
		output << num1.x;
		return output;
	}
int main()
{
	Insert s1;
	cout<<"Enter value ";
	cin>>s1;
	cout<<"You entered "<<endl;
	cout<<s1;
}