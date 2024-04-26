#include<iostream>
using namespace std;
class Person
{
	private:
		int P_id ,P_age ;
		string P_name;
	public:
		Person()
		{
			cout<<"Enter ID , Age , Name "<<endl;
			cin>>P_id >> P_age >> P_name;
		}	
	void display()
	{
		cout<<"Your name "<<P_name<<endl;
		cout<<"Your ID "<<P_id<<endl;
		cout<<"Your age "<<P_age;
	}
};
class Engineer : public Person
{
	private:
		int s_id , s_code;
	public:
	 void get_detail()
	 {
	 	cout<<"Enter secret ID and code "<<endl;
			cin>>s_id >> s_code;
	 }
	 void show_detail()
	 {
	 	cout<<"Your secret id "<<s_id;
	 	cout<<"Your secret code "<<s_code;
	 }
};
int main()
{
	Engineer E1;
	E1.get_detail();
	E1.display();
	E1.show_detail();
	return 0;
}