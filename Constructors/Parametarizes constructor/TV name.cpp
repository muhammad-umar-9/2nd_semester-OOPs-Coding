#include<iostream>
using namespace std;

class TV
{
	private:
	string brand_name , model;
	int retail_price;
	
	public:
	TV()
	{
		cout<<"Enter TV brand name"<<endl;
		cin.ignore();
		getline(cin,brand_name);
		cout<<"Enter Model number"<<endl;
	    getline(cin,model);
		cout<<"Enter Retail price"<<endl;
		cin>>retail_price;
	}
	
	void show()
	{
		cout<<"Your TV name is :"<< brand_name <<endl;
		cout<<"Your Model number is :"<< model <<endl;
		cout<<"Your Retail price  is :"<< retail_price <<endl;
	}
	
};
int main()
{
	TV t1,t2;
	t1.show();
	cout<<"Values after changing "<<endl;
	t2.show();
	return 0;
}