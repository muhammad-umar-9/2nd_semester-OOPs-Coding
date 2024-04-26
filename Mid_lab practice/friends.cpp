#include<iostream>
using namespace std;

class app
{
	private:
		string name;
		int id;
		string *friends;
		int size;
	public:
		app()
		{
		size = 0;
		friends = new string [size];	
		}	
	void set()
	{
		cout<<"Enter name "<<endl;
		cin>>name;
		cout<<"Enter ID "<<endl;
		cin>>id;
	}	
	void add(app &temp)
	{
		string *tempo = new  string [size + 1];
		for(int i = 0; i < size; i++)
		{
			tempo[i] = friends[i];
		}
		tempo[size]=temp.name;
		delete[]friends;
		friends = tempo;
		size++;
	}
	void display()
	{
		cout<<endl<<"Your friends are "<<endl;
		for(int i=0; i< size; i++)
		{
			cout<< i+1 << " "<< friends[i]<<endl;
		}
	}
};
int main()
{
	app khan , jj ,kk;
	khan.set();
	jj.set();
	kk.set();
	khan.add(jj);
	khan.add(kk);
	khan.display();
	return 0;
}