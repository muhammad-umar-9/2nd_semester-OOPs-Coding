// Dynamically Allocate Memory for 1D Array in C++
#include <iostream>
using namespace std;
#define N 10
int main()
{
// dynamically allocate memory of size N
	int * A = new int[N];

// assign values to allocated memory
   for (int i = 0; i < N; i++){
   
	A[i] = i + 1;
	cout << A[i] << " ";
//   cin>>A[i];
//   i++;
}

// print the 1D array
//	for (int i = 0; i < N; i++)
//	  cout << A[i] << " "; // or *(A + i)

// deallocate memory

	delete[] A;

return 0;
}