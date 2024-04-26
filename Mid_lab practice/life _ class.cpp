#include<iostream>
using namespace std;

class Forever
{
	private:
		int life,death_year;
		int born_year;
		string name;
	friend int main();     	//This allows the main function to access the private constructor of the Forever class and create instances directly.
	//we can also declare it in public section
	 Forever(int l , int d_y ,int b_y , string n)
		{
		life = 	l;
		death_year = d_y;
		born_year = b_y;
		name = n;
		}
	public:	
	void display()
	{
	cout<<"Your life is: "<<life<<endl;	
	cout<<"Your death is: "<<death_year<<endl;	
	cout<<"Your born is: "<<born_year<<endl;
	cout<<"Your name is: "<<name<<endl;		
	}	
	
//	// Public static member function acting as a factory method
//		static Forever ever(int l, int d_y, int b_y, string n )
//		{
//			// Call the private constructor to create and return an instance
//			return Forever(l, d_y, b_y, n);
//		}
	
};
int main()
{
//	Forever F1 = Forever::ever(30 , 12 , 2004 ,"omer");
	Forever F1(30 , 12 , 2004 ,"omer");
	F1.display();
}