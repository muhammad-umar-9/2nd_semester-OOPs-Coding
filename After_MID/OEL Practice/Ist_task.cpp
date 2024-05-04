#include<iostream>
using namespace std;
class Area
{
      private:
      double len , wid;
      double area;
      public:
     Area()
     {
      cout<<"Welcome To Area Class";
      len = 20;
      wid = 10;
     }
     Area(const Area& a1)
     {
      len = (a1.len + 5);
      wid = (a1.wid + 5);
     }
     Area(int l , int w)
     {
      len = l;
      wid = w;
     }
     Area(double l , double w)
     {
      len = l;
      wid = w;
     }
     void calculate()
     {
      area = len * wid;
      
     }
     void display()
     {
      calculate();
      cout<<"Area is : "<< area <<endl;
     }

};
int main()
{
      Area A1;
      Area A2 = A1;
      Area A3(3 , 5);
      Area A4(10.6 , 20.5);
      A1.display();
      A2.display();
      A3.display();
      A4.display();
      return 0;
}