#include<iostream>
using namespace std;

class Book
{
	private:
	int pages,price;
	string title;
	public:
void input()
{
	cout<<"Enter book pages"<<endl;
	cin>>pages;
	cout<<"Enter book price"<<endl;
	cin>>price;
	cout<<"Enter book title"<<endl;
	cin>>title;
}
void output()
{
	cout<<"Your book pages "<<pages<<endl;
	cout<<"Your book price "<<price<<endl;
	cout<<"Your book title "<<title<<endl;
}
};
int main()
{
	Book b1;
	b1.input();
	
	Book b2(b1);
	Book b3=b1;
	cout<<"The output of Book 1"<<endl;
	b1.output();
	cout<<"The output of Book 1"<<endl;
	b2.output();
	cout<<"The output of Book 1"<<endl;
	b3.output();
	
	return 0;
}