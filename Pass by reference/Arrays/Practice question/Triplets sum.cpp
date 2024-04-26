#include<iostream>

using namespace std;

int main()
{
	//Dry run
	
	//{3,1,2,4,0,6}
	//targetsum=6
	
	//at first triplets value is zer0
	
	//i=0; j=1; k=2  //when first time run then value of i,j and k e.g j=i+1; k=j+1;
	//array[i]=3;  //AT ZERO INDEX
	//array[j]=1;  //AT FIRST INDEX
	//array[K]=2;  //AT 2ND INDEX
    //	3+1+2 = 6
	//Now our triplets value will be 6 which is = targetsum 
	
	//and it will increment the value and k will become 3 
	//at third index value of k = 4;
	//Now i=1; j=1; k=3; //at these index we check value and calculate them so, 3+1+4=8!=6 
	//so, again loop runs and now value will be i=0; j=1; k=4
	//at 4 index value of k is 0 , //at these index we check value and calculate them so, 3+1+0=4!=6
	
	//so, again loop runs and now value will be i=0; j=1; k=5;
	//at 5 index value of k is 6   //at these index we check value and calculate them so, 3+1+6=10!=6
	
	//As k loop size (5) becomes equal to size of array, so now j loop will be run and repeat same procedure
	
	// j will increment and become 2 and k=j+1 so, k=3;
	//at these index i=0; j=2 and k=3 values are 3+2+4=9!=6 so again loop runs
	//values will be i=0; j=2; and k=4 values at these index 3+2+0=5!=6 so again loop runs and repeat procedure
	//values will be i=0; j=2; and k=5 values at these index 3+2+6=11!=6 so again loop runs
	
		//As k loop size (5) becomes equal to size of array, so now again j loop will be run and repeat same procedure
		//i=0; j=3; k=j+1; k=4 
	//	so values at these index 3+4+0=7!=6
	//i=0; j=3; k=5 values are 3+4+6=13!=6
	//i=0; j=4; k=j+1; k=5 values are 3+0+6=9!=6
	
	//i=0; j=5; k=6;  //SO HERE OU J AND K LOOP WILL TERMINATE AS THEIR SIZE BECOMES EQUAL TO SIZE OF ARRAY
	
	//so now value of i will increment from 0 to 1 so , i=1; j=i+1 then j=2; k=j+1, so k=3;
	//Now at index i=1; j=2 ; k=3 values are 1+2+4=7!=6 so loop again run
	//now i=1; j=2; k=4; values 1+2+0=3!=6
	
	int array[6]={3,1,2,4,0,6};
	int target_sum=6;
	int length=sizeof(array)/sizeof(array[0]);
	int triplets=0;
	for(int i=0; i<length ; i++)
	{
		for(int j=i+1; j<length; j++)
		{  
		for(int k=j+1; k<length; k++){
		
		   if( array[i]+array[j]+array[k]==target_sum)
			{
				triplets++;
			  }
	    	}
		}
	}
	cout<<triplets;
	return 0;
}