#include<iostream>
#include<vector>
#include<algorithm>   //for reverse function
using namespace std;
int main()
{
	//FOR TAKING INPUT
	/*
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	*/
    v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	int k=2;
	k=k%v.size();
	reverse(v.begin(),v.end());   
	reverse(v.begin(),v.begin()+k);
	reverse(v.begin()+k,v.end());
	
//	After the first reverse: [5, 4, 3, 2, 1] - The entire vector is reversed.

 //After the second reverse: [4, 5, 3, 2, 1] - The first 2 elements are reversed.

//After the third reverse: [4, 5, 1, 2, 3] - The remaining elements are reversed.

	//we use for each loop for vector
	for(int a:v)
       {
		cout<<a<<" ";
	 }
	 cout<<endl;

}