// normal code

// #include <iostream>
// using namespace std;
// int main() {
  // cout<<"Hello world!";
// }

// omitted namespace
// The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:
// #include <iostream>

// int main() {
//   std::string greeting = "Hello";
//   std::cout << greeting;
//   return 0;
// }


//Both \n and endl are used to break lines. However, \n is most used.
#include <iostream>
using namespace std;

int main() {
  // Two \n characters after each other will create a blank line:
  cout << "Hello World! \n\n"; //(\n) is called an escape sequence
  cout << "I am learning C++";

  // Another way to insert a new line, is with the endl manipulator:
  cout << "Hello World!" << endl;
  cout << "I am learning C++"; 

  // Creates a horizontal tab
  cout << "Hello World!\t"; 
  cout << "I am learning C++"; // Hello World!    I am learning C++

  // Creates a horizontal tab
  cout << "Hello World!\\";
  cout << "I am learning C++"; // Hello World!\I am learning C++

  // 	Inserts a double quote character
  cout << "They call him \"Jayesh\"."; // They call him "Jayesh".
  return 0;

  // Any text between // and the end of the line is ignored by the compiler (will not be executed).
  
 /* Multi-line comments start
 with /* and ends with */

// Any text between /* and */ will be ignored by the compiler:
}

