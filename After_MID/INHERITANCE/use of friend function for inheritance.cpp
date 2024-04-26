#include<iostream>
using namespace std;

class Animal
{
protected:
    void walk()
    {
        cout << "Ability to walk" << endl;
    }

    void eat()
    {
        cout << "Ability to eat" << endl;
    }

public:
    friend void accessAnimalActions(Animal& animal);
};

class Dog : public Animal
{
public:
    void quality()
    {
        cout << "bhaooo" << endl;
    }   
};

class Cat : public Animal
{
public:
    void quality_1()
    {
        cout << "Meawoo" << endl;
    }
    Dog d1;
};

class Horse : protected Animal
{
public:
    void quality_2()
    {
        cout << "BRAVERY" << endl;
    }

    // Public function to access protected members of Animal
    void accessAnimalActions()
    {
        walk();
        eat();
    }
};

void accessAnimalActions(Animal& animal)
{
    animal.eat();
    animal.walk();
}

int main()
{
    Horse h1;
    h1.quality_2(); // Call public member function of Horse

    // Access protected member functions using public member function of Horse
    h1.accessAnimalActions();

    return 0;
}
