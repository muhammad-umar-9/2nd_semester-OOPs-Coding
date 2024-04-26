#include <iostream>
#include "2023535_definitions_1.cpp"
using namespace std;

int number_of_records;

void insertNewRecord(Person *person_Records[]) {
    cout << "Enter " << number_of_records << " records:" << endl;
    for(int i = 0; i < number_of_records; i++) {
        cout << "Enter your name" << endl;
        cin>>person_Records[i]->p_name;
		

    
    }
}

void showAllRecords(Person *person_Records[]) {
    for(int i = 0; i < number_of_records; i++) {
        cout << "Your name is: " << person_Records[i]->p_name << endl;
        // Output the rest of the record...
    }
}

int main() {
    cout << "How many records do you want to save" << endl;
    cin >> number_of_records;
    cin.ignore(); // Ignore the newline character left in the input buffer
    Person *person_Records[number_of_records]; // Array of pointers to Person objects

    insertNewRecord(person_Records);
    showAllRecords(person_Records);
    return 0;
}
