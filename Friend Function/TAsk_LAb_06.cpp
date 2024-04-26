#include<iostream>
using namespace std;

class Bank_Account;   //declare now to use it for in next class where it required
class Bank_Manager
{
    public:
    void freeze_Account(Bank_Account &account);  //function to freeze the account
};
class Bank_Account
{
    private:
        int account_Number;
        double balance;
        
    public:
        Bank_Account(int accNum, double bal)  //constructor to initialize account number and balance
        { 
            account_Number = accNum;
            balance = bal;
        }
        
        void details(void) //function to display account details
		const
        {
            cout<<"Account Number: "<<account_Number<<endl;
            cout<<"Balance: "<<balance<<endl;
}

        void setBalance(double  bal)
		{
		balance=bal;
		}
        friend class Bank_Manager;    
};
void Bank_Manager::freeze_Account(Bank_Account &account)
{
    account.setBalance(0);
}

int main()
{
    Bank_Account myAcc(1234,500);
    myAcc.details();        
    Bank_Manager manager;
   									 
    manager.freeze_Account(myAcc);     // Freezing the account
   											 
    cout << "After freezing:" << endl;    // Displaying account details after freezing
    myAcc.details();  
}