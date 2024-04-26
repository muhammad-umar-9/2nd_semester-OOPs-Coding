#include<iostream>
#include<string>


using namespace std;
class Add_s
{
	private:
	char str[50];
	public:
	Add_s()
	{
	str[0] = 'o';
//	str[1] = '\o';	
	}	
	void in()
	{
		cout<<"Enter string ";
		cin.getline(str,50);
//		str[strlen(str)] = '\0'; // Ensure null termination
	}
	void show()
	{
		cout<<"string is "<<str<<endl;
	}
	int operator == ( Add_s S)
	{
	if( (strlen(S.str)) == strlen(str) )
	{
	return 1;
}
	else
	return 0;
	}
};
int main()
{
	Add_s S1 , S2 ;
	S1.in();
	S1.show();
	S2.in();
	S2.show();
	if(S1 == S2)
	{
		cout<<"Both string length are equal ";
	}
	else
	{
	cout<<"Both string length are not equal ";
	}
	return 0;
}