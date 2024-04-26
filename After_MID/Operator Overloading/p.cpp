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
	}	
	void in()
	{
		cout<<"Enter string ";
		cin.getline(str,50);
	}
	void show()
	{
		cout<<"string is "<<str;
	}
	Add_s operator + (Add_s S)
	{
		Add_s temp;
		strcpy(temp.str , str);
		strcat(temp.str , S.str);
		return temp	;
	}
};
int main()
{
	Add_s S1 , S2 , S3;
	S1.in();
	S2.in();
	S3 = S1 + S2;
	S3.show();
	
	return 0;
}