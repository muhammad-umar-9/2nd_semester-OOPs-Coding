#include<iostream>
using namespace std;
class Arrays
{
      public:
      int *array1;
      int *array2;
      int size = 10;
      
      Arrays(int *arr1 , int *arr2)
      {
            array1 = new int[size];
            array2 = new int [size];
            for(int i=0; i<size; i++)
            {
                  array1[i] = arr1[i];
                  array2[i] = arr2[i];

            }
      }
      Arrays(int *a1)
      {
            array1 = new int[size];
            array2 = new int [size];
            for(int i=0; i<size; i++)
            {
                  array1[i] = a1[i];
                  array2[i] = a1[i];
            }

      }
      void Sum()
      {
            int s1 , s2;
            s1=0;
            s2=0;
            for(int i=0; i<size; i++)
            {
                  s1 = s1 + array1[i];
                  s2 = s2 + array2[i];
            }
            cout<<"Ist array sum is: "<< s1 <<endl;
            cout<<"2nd array sum is: "<< s2 <<endl;
      }
      ~Arrays()
      {
            delete[] array1;
            delete[] array2;
            cout<<"I am in destructor "<<endl;
      }

};
int main()
{
      int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
      int a1[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2};

      Arrays ar(a , a1 );
      ar.Sum();
      cout<<endl;

      int a_c[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
      Arrays a2(a_c);
      a2.Sum();
      return 0;
}