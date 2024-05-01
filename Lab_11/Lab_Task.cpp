#include <iostream>
#include <vector>
using namespace std;
int main()
 {
    vector<int>marks; // Vector to store the marks

    cout << "Enter the marks of 7 subjects: " << endl;

    // input marks of 7 subjects
    for(int i = 0; i < 7; i++) 
    {
        int mark;
        cin>>mark;
        marks.push_back(mark);
    }

    // Display the marks
    cout << "Marks of seven subjects:" << endl;

    for(vector<int>::iterator v = marks.begin(); v != marks.end(); ++v)  //use for loop
    {
        cout<< *v << " "<<endl;
    }
   

    cout<<"---------------------------------"<<endl;

    
    marks.push_back(95);   //these values will be store at the end of vector
    marks.push_back(89);
    
    // Remove the first mark from the vector
    if (!marks.empty()) 
    {

        marks.erase(marks.begin());
     
    }

    cout << "Size of the vector: " << marks.size() << endl;

    //  after modification
    cout << "All marks after modification:" << endl;
    for (vector<int>::iterator s = marks.begin(); s != marks.end(); ++s) 
    {
        cout<< *s <<" "<<endl;
    }
   

    return 0;
}
