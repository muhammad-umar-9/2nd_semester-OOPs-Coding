#include<iostream>

using namespace std;

  cyclicSwap(int *a, int *b, int *c)
 {
 	int temp,temp1,temp2;
 	
 	temp=*a;
 	temp1=*b;
 	temp2=*c;
 	
 	*a=temp2;
 	*b=temp;
 	*c=temp1;
 }
 int main()
 {
 	int x,y,z;
 	cin>>x>>y>>z;
 	cout<<"befroe swapping"<<endl<<"X is: "<<x<<"  Y is: "<<y<<"  Z is: "<<z<<endl<<"\n";
 	cyclicSwap(&x,&y,&z);
 	cout<<"After swapping"<<endl;
 	cout<<"X is: "<<x<<"  Y is: "<<y<<"  Z is: "<<z<<endl;
 }