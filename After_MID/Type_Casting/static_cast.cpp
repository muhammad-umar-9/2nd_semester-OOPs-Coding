#include<iostream>
using namespace std;

class Cbase{};

class CDerived : public Cbase{};

int main()
{
      system("cls");
      Cbase *a = new Cbase;
      CDerived *b = static_cast<Cbase*>(a);
      
      if (b == nullptr) {
        cout << "Static cast failed: 'b' is null." << endl;
    } else {
        cout << "Static cast performed (but accessing CDerived members through b is risky)." << endl;
    }

    return 0;

     

}