#include<iostream>
using namespace std;

struct Product
{
	string name;
};
void edit(Product *product)
{
	for(int i=0; i<4; i++)
	{
		cin>>product[i].name;
	
	cout<<"your name is "<<product[i].name;
}
}
void edit_index(Product *product)
{
	int n;
	cout<<"Enter 1 to change value at index 2"<<endl;
	cin>>n;
	for(int i=0; i<4; i++)
	{
	if (n >= 0 && n < 4)
	{
		cout << "Enter the new value: ";
		cin >> product[i].name;

		cout << "Value at index " << n << " changed to: " << product[i].name << endl;
	}
	else
	{
		cout << "Invalid index entered. Index should be between 0 and 3." << endl;
	}
}
}
int main()
{
	
	Product person_recoord[4];
	cout<<"Enter name"<<endl;
	edit(person_recoord);
	edit_index(person_recoord);
}