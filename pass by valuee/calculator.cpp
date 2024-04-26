#include<iostream>
using namespace std;

int calculator(int x , int y,char op)
{
	 switch(op)
	   {
	   	case '+':
	   	cout<<x+y;
	   	break;
	   	
	   	case '-':
	   	cout<<x-y;
	   	break;
	   	
	   	case '*':
	   	cout<<x*y;
	   	break;
	   	
	   	case '/':  //to get quotient
	   		if(y==0)
	   		{
	   			cout<<"not divisible by zero"<<endl;
			}
			else   
	   	cout<<x/y;
	   	break;
	   	
	   	case '%':  //to get remainder
	   	if(y==0)
	   		{
	   			cout<<"not divisible by zero"<<endl;
			}
			else  
	   	cout<<x%y;	
	   	
	   	default:
	   		cout<<"invalid operator"<<endl;
	   	
	   }
}
int main()
{
	int a,b;
	cout<<"Enter two numbers to perform"<<endl;
	char c;
	cin>>a>>b;
	cout<<"( + , - , *, / , % )"<<endl;
	cin>>c;
	cout<<"your desired result is "<<endl;
	calculator(a , b , c);
}