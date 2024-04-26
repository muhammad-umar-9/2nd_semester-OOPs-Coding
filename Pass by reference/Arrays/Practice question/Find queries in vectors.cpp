#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n,q;
	cout<<"Enter size of your array: "<<endl;
	cin>>n;
	vector<int> v(n);
	cout<<"Enter elements of your array "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}
	
	const int N = 1e5 + 10; //writing 10 raise to power 5
	vector<int>frequency(N,0); //initialize the size N and also we can give value thats starts fro 0;
	for(int i=0; i<n; i++)
	{
		frequency[v[i]] ++;        //fruency of v of i every element that is present in v(orignal vector) at every index ++
	}
	
	cout<<"Enter queries you want to check in array: "<<endl;
	cin>>q;
	while(q--) //means the loop will continue as long as the value of q is greater than zero.
	{
		int queryelements;
		cin>>queryelements;
		cout<<"Your query element:"<<queryelements<<"is repeated "<<frequency[queryelements]<<" times"<<endl;  //from this we can know about that how many times that element is present in vector
	}
	
}