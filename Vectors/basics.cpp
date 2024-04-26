#include<iostream>

#include<vector>

using namespace std;

int main()
{
	/*
	
	vector<int>v;
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.push_back(1);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.push_back(2);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.push_back(3);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.push_back(4);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
		v.push_back(5);
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.pop_back();
	cout<<"size: "<<v.size()<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	*/
	//taking input from user
	
	//USING FOR LOOP
	
	vector<int>v;
	
	cout<<"Enter elements for FOR LOOP"<<endl;
	
	for(int i=0; i<5; i++)
	{
		int element;
		cin>>element;  //when we not define our size
	//	cin>>v[i];  //when we define our size in vetor   for(int i=0; i<v.size(); i++)
		v.push_back(element);
	}
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	
	
	//USING FOR EACH LOOP
	/*
	
	for(int i=0; i<5; i++)
	{
		int element;
		cin>>element;  //when we not define our size
	//	cin>>v[i];  //when we define our size in vetor   for(int i=0; i<v.size(); i++)
		v.push_back(element);
	}
	
	*/
	
	v.insert(v.begin()+2,7);  //to add any element at any place
	
	cout<<"After inserting element 7 at 3rd position"<<endl;
	
	for(int ele:v)
	{
	  cout<<ele<<" ";
	}
	cout<<endl;
	
	//USING WHILE LOOP
	
	/*
	for(int i=0; i<5; i++)
	{
		int element;
		cin>>element;  //when we not define our size
	//	cin>>v[i];  //when we define our size in vetor   for(int i=0; i<v.size(); i++)
		v.push_back(element);
	}
	
	*/
	
	v.erase(v.end()-2);  //to remove any element at any place
	
//	v.clear();  //to remove all elements
	
	cout<<"After removing 2nd last element"<<endl;
	
	int idx=0;
	
	while(idx<v.size())
	{
		cout<<v[idx]<<" ";
		idx++;
	}
	cout<<endl;
	
	v.push_back(8);  //to add any element
	
	cout<<"After adding element at last"<<endl;
	
	int i=0;
	
	while(i<v.size())
	{
		cout<<v[i]<<" ";
		i++;
	}
	cout<<endl;
	
	v.pop_back();  //to delete last element only
	
	cout<<"After deleting last element"<<endl;
	
	int a=0;
	
	while(a<v.size())
	{
		cout<<v[a]<<" ";
		a++;
	}
	cout<<endl;


}