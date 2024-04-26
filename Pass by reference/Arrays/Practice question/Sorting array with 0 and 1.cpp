#include<iostream>
#include<vector>
using namespace std;

void sort_zero_and_ones( vector<int> &v)
{
	int zero_counts=0;
	for(int a:v) //here a is the element of array
	{
		if(a==0)
		{
			zero_counts++;  //here we count the number of zeros 
		}
	}
	for(int i=0; i<v.size(); i++)
	{
		//our array is {1,1,0,1,0,0,1}  //zerocounts from above loop will be 3
		  //at first i= 0 and it is < 3  as i<zerocount the it will be place 0 at first position {0,1,0,1,0,0,1}
		  //again i will be increase from 0 to 1 and 1<3 so it will be place 0 at 2nd position {0,0,0,1,0,0,1}
		//again i will be increase from 1 to 2 and 2<3 so it will be place 0 at 3rd position{0,0,0,1,0,0,1}
		//again i will be increase from 2 to 3 and 3<3  as condition become false so it will be move to the else condition and place 1 at 4th position {0,0,0,1,0,0,1}
		//again i will be increase from 3 to 4 and 4<3 as condition become false so it will be move to the else condition and place 1 at 5th position  {0,0,0,1,1,0,1}
		//again i will be increase from 4 to 5 and 5<3 as condition become false so it will be move to the else condition and place 1 at 6th position  {0,0,0,1,1,1,1}
		
		if(i<zero_counts) //here we assign our 0 number at first
		{
			v[i]=0; 
		}
		else   //the remaining elements set to the last
		{
			v[i]=1;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter size of array "<<endl;
	cin>>n;
	vector<int> v;
	int element;
	cout<<"Enter "<< n << "elements of array "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>element;
		v.push_back(element);
	}
	sort_zero_and_ones(v);
	
	for(int i=0; i<n; i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}