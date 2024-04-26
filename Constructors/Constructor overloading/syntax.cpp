#include<iostream>
using namespace std;

class Over
{ 
    private:
	int num;
	char ch;
	public:
		Over()
		{
			num=0;
			ch='A';
		}
		
		Over(int x , char y)
		{
			num = x;
			ch = y;
		}
	void show()	
	{
		cout<<"Your num is: "<< num <<endl;
		cout<<"Your character is:"<< ch <<endl;
	}
};
int main()
{
	Over O1 , O2(100,'B');
	cout<<"First show "<<endl;
	O1.show();
	cout<<"The content of 2nd "<<endl;
	O2.show();
	return 0;
}