#include <iostream>
#include <vector>

using namespace std;

// Recursive function to get the maximum value in a vector
int GetMax(const vector<int>& nums, int index = 0) {
    // Base case: if the index is at the end of the vector, return the smallest possible integer
    if (index == nums.size()) 
	{
        return INT_MIN;
    } else
	{
        // Recursive case: return the maximum of the current element and the maximum in the rest of the vector
    return max(nums[index], GetMax(nums, index + 1));
    }
}

int main() {
    // Get vector size from the user
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    // Get vector elements from the user
    vector<int> myVector(size);
    cout << "Enter " << size << " integers separated by space: ";
    for (int i = 0; i < size; ++i) {
        cin >> myVector[i];
    }

    // Call GetMax function, print the maximum value in the vector
    int maxVal = GetMax(myVector);
    cout << "Maximum value in the vector: " << maxVal << endl;

    return 0;
}
