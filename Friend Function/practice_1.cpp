#include<iostream>
using namespace std;

class Engine {
private:
    int cylinders, horse_power;

public:
    Engine() {
        cylinders = 20;
        horse_power = 12;
    }

    void set_engine(int cyn, int hp) {
        cylinders = cyn;
        horse_power = hp;
    }

    friend void show_engine(Engine);
};

void show_engine(Engine engine) {
    cout << "Values of constructor" << endl;
    cout << "cyn " << engine.cylinders << endl;
    cout << "hp " << engine.horse_power << endl;
}

class Car {
private:
    string name;
    string model;
    Engine engine;

public:
    int bait;
    Car() {
        name = "Toyota";
        model = "Camry";
    }
    friend void display(Car*);
     friend void display(Car);
};

void display(Car* car) {
    (*car).bait = 10;
    cout<<"We are in pointer function"<<endl;
    cout << "Your Car name is " << car->name << endl;
    cout << "Your Car model is " << car->model << endl;
    car->engine.set_engine(20, 56);
    show_engine(car->engine);
}
void display(Car car) {
    car.bait = 15;
    cout << "Your Car name is " << car.name << endl;
    cout << "Your Car model is " << car.model << endl;
    car.engine.set_engine(20, 56);
    show_engine(car.engine);
}

int main() {
    Car c1,c2;
    c1.bait = 12;
    
    display(&c1);
    cout<<endl<<"\n";
    cout<<endl<<"\n";
    c2.bait = 50;
	display(c2);
    cout << c1.bait<<endl;
    cout<< c2.bait<<endl;
    return 0;
}
