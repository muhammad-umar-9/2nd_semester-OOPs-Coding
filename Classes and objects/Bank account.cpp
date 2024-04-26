#include<iostream>
using namespace std;
int depositAmount, withdrawAmount;
class Bank
{
	private:
		string name , type;
		int account_No , balance_amount , new_amount;
	public:
	
	Bank()
	{
		
		cout<<"Enter Name of account holder "<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"Enter Type of account  "<<endl;
		cin.ignore();
		cin>>type;
		cout<<"Enter account number "<<endl;
		cin>>account_No;
		
	}
	void Deposit(int x)
	{
		
		depositAmount = x;
		cout<<"Your balance is"<< depositAmount <<endl;
	}	
	void Withdraw(int y)
	{
		withdrawAmount = y;
		if(withdrawAmount > depositAmount)
		{
			cout<<"Sorry you can not cash now"<<endl;
		}
		else
		{
			balance_amount = withdrawAmount-depositAmount;
			cout<<"You withdraw amount "<< withdrawAmount <<endl;
		}
	}
	void Display()
	{
	cout<<"Your account name is "<< name <<endl;
	cout<<"Your accout type is: "<< type <<endl;
	cout<<"Your new balance after withdrawal is "<<balance_amount;
	}
};
int main()
{
	Bank b1;
	
	
	cout<<"Enter amount to deposit: ";
	cin>>depositAmount;
	b1.Deposit(depositAmount);
	 
	cout<<"Enter amount to withdraw: ";
	cin>>withdrawAmount;
	b1.Withdraw(withdrawAmount);
	
	b1.Display();
	
	return 0;
	
}