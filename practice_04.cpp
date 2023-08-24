// Declare Many Variables

// #include <iostream>
// using namespace std;
// int main() {
//   // int x = 5, y = 6, z = 7;
//   // or we can write 
//   int x,y,z;
//   x = y = z = 50; // it means that value of x, y ,z are assine as 50  
//   cout<< x + y + z;
//   return 0;
// }

// identifiers' 
// rule for naming variables are: 
// Names can contain letters, digits and underscores
// Names must begin with a letter or an underscore (_)
// Names are case sensitive (myVar and myvar are different variables)
// Names cannot contain whitespaces or special characters like !, #, %, etc.
// Reserved words (like C++ keywords, such as int) cannot be used as names

// Note: It is recommended to use descriptive names in order to create understandable and maintainable code:

// #include <iostream>
// using namespace std;
// int main() 
// {
//   // good way to discribe the name of the variable 
//   int minutesPerHour = 60;

//   // ok, but not so easy to understand what m actually is
//   int m = 60;
//   return 0;
// }

// c++ constants 
// When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):

#include <iostream>
using namespace std;
int main() {
  const int newNum = 15; // newNum will always be 15
  newNum = 10; // it show error because we are using const keyword
}
