// c++ user input
// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

// #include <iostream>
// using namespace std;
// int main() {
//   int num; 
//   cout << "Type a number: "; // Type a number and press enter
//   cin >> num; // Get user input from the keyboard
//   cout << "Your number is: " << num; // Display the input value
//   return 0;
// }

// c++ data type 
// #include <iostream>
// using namespace std;
// int main() {
//   int myNum = 5;               // Integer (whole number)
//   float myFloatNum = 5.99;     // Floating point number
//   double myDoubleNum = 9.98;   // Floating point number
//   char myLetter = 'D';         // Character
//   bool myBoolean = true;       // Boolean
//   string myText = "Hello";     // String
// }

// float vs double 
// The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.

// Scientific Numbers
// A floating point number can also be a scientific number with an "e" to indicate the power of 10:
// #include <iostream>
// using namespace std;
// int main() {
//     float f1 = 20e2;
//     double d1 = 8E8;
//     cout << f1 << "\n"; // 2000
//     cout << d1; // 1.8e+06
//     return 0;
// }

// characters
// you can use ASCII values to display certain characters:
// #include <iostream> 
// using namespace std;
// int main {
//   char a = 65, b = 66, c = 67;
//   cout << a; // A
//   cout << b; // B
//   cout << c; // C
//   return 0;
// }

// Boolean types 
// A boolean data type is declared with the bool keyword and can only take the values true or false.
// #include <iostream>
// using namespace std;
// int main() {
//   bool isCodingFun = true;
//   bool isFishTasty = false;
//   // When the value is returned, true = 1 and false = 0.
//   cout << isCodingFun << "\n"; // 1
//   cout << isFishTasty; // 0
//   return 0;
// }

// String data type
// The string type is used to store a sequence of characters (text). This is not a built-in type, but it behaves like one in its most basic usage. String values must be surrounded by double quotes:
// #include <iostream>
// using namespace std;
// int main() {
//   string name = "Jayesh";
//   cout<<name;
// }
// To use strings, you must include an additional header file in the source code, the <string> library:
#include <iostream>
#include <string>
using namespace std;
int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}

