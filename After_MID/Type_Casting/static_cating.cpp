#include<iostream>
using namespace std;
int main()
{
      double multiplication = 4.5 * 5.6;
      
      cout<<"Double value : "<<multiplication<<endl;
      cout<<"value after using static cast "<<endl;

      int  result = static_cast<int>(multiplication);
      cout<<result;


}
