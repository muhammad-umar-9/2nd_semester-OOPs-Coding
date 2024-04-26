#include<iostream>

using namespace std;

int main()
{
	int x,y; //declare x and y and they both have garbage value
	cin>>x>>y;
	int * ptrx = &x;  //&x fetches adress of x and store it in ptrx
	int * ptry = &y;  //&y fetches adress of y and store it in ptry
	
	int result; //declare result as it has garbage value now
	
	int *ptr_result = &result;
	/*
     	*ptrx = 10;
     	*ptry = 20;
     	*ptrx + *ptry = 30;
     	*ptr_result = 30 (we store 30 on adress stored in *ptr_result
	*/
	
	*ptr_result= *ptrx + *ptry;
	
	cout<<result<<"  "<<*ptr_result;
}