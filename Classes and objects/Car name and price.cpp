#include<iostream>
using namespace std;

class Book
{
	public:
	int book_id;
	int book_pages;
	int book_price;
	public:
void fill()
	{
	cout<<"Enter book id"<<endl;
	cin>>book_id;
	cout<<"Enter book pages"<<endl;
	cin>>book_pages;
	cout<<"Enter book price"<<endl;
	cin>>book_price;
	}
void print()
	{
	cout<<"Book 1  ID  :   "<<book_id<<endl;
	cout<<"Book 1  Pages : "<<book_pages<<endl;
	cout<<"Book 1  Price : "<<book_price<<endl;
	}
int set_book_id(int price)	
   {
	 
	  book_price=price;
	}	
int get(void)	
{
	return book_price;
}
};
int main()
{
	Book b1,b2;
	b1.fill();
	b1.print();
	b2.set_book_id(45);
	cout<<"Book 2 price is:"<<b2.get()<<endl;
	
	if(b1.book_price>=b2.book_price)
	{
		cout<<"Book 1 is expensive "<<endl;
	}
	else 
	{
		cout<<"Book 2 is expensive "<<endl;
	}
	return 0;
}
