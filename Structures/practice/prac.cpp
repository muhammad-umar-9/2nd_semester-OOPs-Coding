#include <iostream>
using namespace std;

int main()
{
    int max = 5; // Maximum initial size of the array
    
    int *a = new int[max]; // Dynamic array allocation
    int n = max; // Current number of elements in the array
    
    char check; // Variable to store user input
    
    cout << "Enter 5 values" << endl;
    for (int i = 0; i < max; i++)
    {
        cin >> a[i]; // Input values into the array
    }
    
    do
    {
        cout << "Wanna enter more values (y/N)" << endl;
        cin >> check; // Ask user if they want to enter more values
        
        if (check == 'y' || check == 'Y')
        {
            max = max + 1; // Increase the maximum size of the array
            int *temp = new int[max]; // Create a new temporary array with the updated size
            
            // Copy elements from the old array to the new array
            for (int i = 0; i < n; i++)
            {
                temp[i] = a[i];
            }
            
            delete[] a; // Deallocate memory of the old array
            a = temp; // Point 'a' to the new array
            
            cout << "Enter more values" << endl;
            cin >> a[n]; // Input new value into the array
            n++; // Increment the number of elements in the array
        }
        else
        {
            break; // Exit the loop if user does not want to enter more values
        }
    }
	 while (check == 'y' || check == 'Y'); // Continue loop if user wants to add more values
    
    cout << "Array Values" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; // Output all values in the array
    }
    
    delete[] a; // Deallocate memory of the final array
    
    return 0;
}
