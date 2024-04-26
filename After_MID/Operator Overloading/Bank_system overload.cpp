#include<iostream>
using namespace std;

class Bank
{
	private:
	   int Account_number , balance , deposite , withdraw;
	   string Name , account_type;
	  public:
	  Bank(int a=0 , int b=0 )
	{
	  	Account_number = a;
	  	balance = b;
//	  	Name = c;
//	  	account_type = d;
	} 
//	void Deposite(int x)
//	{
//		cout<<"Enter amount to deposite "<<endl;
//		cin>>deposite;
//	}
//	 void Withdraw(int y)  
//	 {
//	 	if(withdraw <= balance)
//	 	{
//	 		cout<<"How many amount you want to withdraw ";
//	 		cin>>withdraw;
//		}
//		else
//		cout<<"Insufficient balance ";
//	 }
	 void display()
	 {
	 	cout<<"Name of account holder "<<Name;
	 	cout<<"Account balance is "<<balance;
	 }
	 Bank operator +(const Bank &b)
	 {
	   Bank B;
	   B.balance = B + b.balance;
		return B;
	 }
	 
	
};
int main()
{
	Bank b1(12 , 340) , b2(23 , 345);
	
	Bank b3 = b1 + b2;
	b3.display();
	
	
	return 0;
}