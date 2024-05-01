#include<iostream>
using namespace std;
template<class S , class T>
void Swap(S &a , T &b)
{
     S temp_1 = a;
     T temp_2 = b;

     a = static_cast<S>(temp_2);
     b = static_cast<T>(temp_1);
      cout<<"Swap elements "<< a << " " << b <<endl;

}
int main()
{
      int a = 10 ,  b = 20;
      float c = 30.5 , d = 40.6;
      Swap<int , int>(a , b);
      cout<<"After swapping "<<" a : "<< a <<" b: "<< b <<endl;
      Swap<float , float>(c , d);
      cout<<"After swapping "<<" a : "<< c <<" b: "<< d <<endl;
      Swap<int , float>(a , d);
      cout<<"After swapping "<<" a : "<< a <<" b: "<< d <<endl;
      return 0;
}