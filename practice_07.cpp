// string

#include <iostream>
using namespace std;
int main() {
  string firstName = "Jayesh";
  string lastName = "Pandey";
  string fullName = firstName + lastName; // concatenation
  // we can also write as 
  string fullName = firstName +" " + lastName;
  cout << fullName; 

  // we can also concatenate by using append() function
  fullName = firstName.append(lastName);
  cout<< fullName;
}
