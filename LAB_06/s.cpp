#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string name,position;
    int id;
    double salary;
};

void addEmployee(Employee* &employees, int& size, int& capacity) {
    if (size >= capacity) {
        capacity *= 2; // Double the capacity
        Employee* temp = new Employee[capacity];
        for (int i = 0; i < size; i++) {
            temp[i] = employees[i];
        }
        delete[] employees;
        employees = temp;
    }

    cout << "Enter employee details:" << endl;
    cout << "Name: ";
    cin >> employees[size].name;
    cout << "ID: ";
    cin >> employees[size].id;
    cout << "Position: ";
    cin >> employees[size].position;
    cout << "Salary: ";
    cin >> employees[size].salary;

    size++;

    char choice;
    cout << "Do you want to add more employees? (Y/N): ";
    cin >> choice;
    if (choice == 'Y' || choice == 'y') {
        addEmployee(employees, size, capacity);
    }
}

void displayEmployees(const Employee* employees, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Name: " << employees[i].name
             << ", ID: " << employees[i].id
             << ", Position: " << employees[i].position
             << ", Salary: $" << employees[i].salary << endl;
    }
}

int main() {
    int capacity = 5;
    int size = 0;
    Employee* employees = new Employee[capacity];

    // Adding employees
    addEmployee(employees, size, capacity);

    // Displaying employees
    displayEmployees(employees, size);

    delete[] employees;
    return 0;
}
