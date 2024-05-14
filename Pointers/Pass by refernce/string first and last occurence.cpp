#include<iostream>

using namespace std;

first_and_last_occurence(string w, char x , int *first , int *last)
{
	//for first occurence
	for(int i=0; i<w.size(); i++)
	{
		if(w[i]==x) //as our first matches with our character
	    {
		*first=i;  //assigned this to our pointer bucket
		break;
	    }
	}
	
	//for last occurence
	
	for(int i=w.size()-1; i>=0; i--)
	{
		if(w[i]==x)
		{
		 *last = i;
		 break;	
		}
	}
}
int main()
{
	string s = "daafag";
	char u = 'a';
	int first= -1;
	int last= -1;
	
	int * pf = &first ;  
	int * pl = &last ;
	
	first_and_last_occurence( s, u, pf , pl);
	
	cout<<"Index of first occurnce: "<< *pf <<endl; //it will give us first index of occurence
	cout<<"Index of first occurnce: "<< *pl;      //it will give us last index of occurence
	
	return 0;
}