#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	int y={15};
	cout<<"Dec is: "<<showbase<<dec<<y<<endl;  //showbase is used for prefix of number
	cout<<"Oct is: "<<showbase<<oct<<y<<endl;
	cout<<"Hex is: "<<showbase<<hex<<y<<endl;
	cout<<"Bit is: "<<bitset<8>(y)<<endl;  //for this we have to include bitset library
	
}