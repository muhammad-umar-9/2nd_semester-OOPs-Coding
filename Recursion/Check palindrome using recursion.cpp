#include<iostream>

using namespace std;

 IsPalindrome(string s) 
{
  if (s.length() <= 1) //here we are using vectors
   {
    return 1;
  }
  else {
    return s[0] == s[s.length() - 1];   //it checks if the first and last characters of the string are the same
    
     IsPalindrome(s.substr(1, s.length() - 2)); //If this condition is true, the function calls itself recursively with the substring 
  }
}
int main()
{
	string x;
	cout<<"Enter string to check palindrome or not"<<endl;
	cin>>x;
	
	 if (IsPalindrome(x)) 
	 {
        cout << "The string is a palindrome." << endl;
    } else 
	{
        cout << "The string is not a palindrome." << endl;
    }  
	
	
}