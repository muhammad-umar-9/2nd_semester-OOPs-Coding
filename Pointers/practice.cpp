#include <iostream>
#include"2023535_definitions_1.cpp"
using namespace std;

const int MAX_RECORDS = 5; // Maximum number of records that can be stored

void insertNewRecord(int person_Record[], int number_of_records)
{
    cout << "Enter " << number_of_records << " records:" << endl;
    for(int i = 0; i < number_of_records; i++)
    {
        cin >> person_Record[i];
    }
}

int main()
{
    int person_Record[MAX_RECORDS]; // Array to store records
    cout << "How many records do you want to save: ";
    cin >> number_of_records;
    
    // Check if the number of records is within the allowed range
    if (number_of_records > MAX_RECORDS || number_of_records < 1)
    {
        cout << "Invalid number of records. Please enter a number between 1 and " << MAX_RECORDS << endl;
        return 1; // Return 1 to indicate an error
    }
    
    insertNewRecord(person_Record, number_of_records);
    
    cout << "Records inserted successfully." << endl;
    
    return 0;
}
