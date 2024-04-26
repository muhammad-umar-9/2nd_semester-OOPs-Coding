#include<iostream>
using namespace std;

class Forever
{
	private:
		int life,death_year;
		int born_year;
		string name;
	friend void display(Forever f);
	public:
	 Forever(int l , int d_y ,int b_y , string n)
		{
		life = 	l;
		death_year = d_y;
		born_year = b_y;
		name = n;
		}
		
};
void display(Forever F1)
	{
	cout<<"Your life is: "<<F1.life<<endl;	
	cout<<"Your death is: "<<F1.death_year<<endl;	
	cout<<"Your born is: "<<F1.born_year<<endl;
	cout<<"Your name is: "<<F1.name<<endl;		
	}
int main()
{

	Forever F2(30 , 12 , 2004 ,"omer");
	display(F2);
}