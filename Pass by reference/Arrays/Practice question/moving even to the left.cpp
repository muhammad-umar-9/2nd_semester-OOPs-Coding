#include<iostream>
#include<vector>

using namespace std;

void sort_by_parity(vector<int> &v)
{
	int left_most = 0;
	int right_most = v.size()-1;
	while(left_most<right_most)   //as left_most and right_most numbers come at same position then our loop terminates
	{
		if(left_most%2==1 && right_most%2==0) //to check odd and even
		{
		
		swap(v[left_most],v[right_most]);
		left_most++ , right_most--;
}
	if(v[left_most] %2==0)
	{
		left_most++;
	}
	if(v[right_most] %2==1)
	{
		right_most--;
	}
}
	return ;
}

int main()
{
	int n, elements;
	cout<<"Enter size of array "<<endl;
	cin>>n;
	
	vector<int> v;
	cout<<"Enter elements of your array "<<endl;
	for(int i=0; i<n; i++)
	{
		
		cin>>elements;
		v.push_back(elements);
	}
	sort_by_parity(v);
	for(int i=0; i<n; i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
}