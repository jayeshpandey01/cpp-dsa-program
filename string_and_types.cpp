// string

// #include <iostream>
// using namespace std;
// int main() {
//   string firstName = "Jayesh";
//   string lastName = "Pandey";
//   string fullName = firstName + lastName; // concatenation
//   // we can also write as 
//   string fullName = firstName +" " + lastName;
//   cout << fullName; 

//   // we can also concatenate by using append() function
//   fullName = firstName.append(lastName);
//   cout<< fullName;
// }

// Adding number and string
// #include  <iostream>
// using namespace std;
// int main() {
//   // if both x and y are string then they concatinet the both number give the output
//   string x = "10"; // this is not a integr it is string 
//   string y = "20";
//   string z = x + y; // z will be 1020 (a string)
//   cout<<z;
  
//   // if x are string and y are integer it show error
//   string x = "10";
//   int y = 20;
//   string z = x+y;
//   cout<<z; // It show error
// }

// string length
//  You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). It is completely up to you if you want to use length() or size():
#include <iostream>
using namespace std;
int main() {
  string alphabate = "ABCDEFGHIJKLMNOPQRST";
  // To get the length of a string, use the length() function:
  cout << "Length of the alphabate is: "<< alphabate.length() << endl; // 20
  
  // we can also use, To get the length of a string, use the size() function:
  cout << "Length of the alphabate is: " << alphabate.size(); // 20

  // access string 
  // You can access the characters in a string by referring to its index number inside square brackets [].
  cout << alphabate[0]; // A
  
  // To change the value of a specific character in a string, refer to the index number, and use single quotes:
  alphabate[0] = 'Z';
  cout<< alphabate; // ZBCDEFGHIJKLMNOPQRST

  // specal character 
  // Because strings must be written within quotes, C++ will misunderstand this string, and generate an error:
  
  string intro = "Hello I am "Jayesh", How are you? ";
  cout << intro; // it creat error 
  // for avoiding error we are using a apecal charater 
  string intro = "Hello I am \"Jayesh\", How are you? ";
  cout << intro; // Hello I am "Jayesh", How are you?

  string stIntro = "It\'s pandey.";
  cout << stIntro; // It's pandey

  string divide = "For dividing any number we can use \\ (backslash)";
  cout << divide;

  // for next line we are use \n and \t it is use to generate space between two sentence
  string info = "Hello friend, \n I am jayesh\t  pandey ";
  cout << info;
// Hello friend, 
// I am jayesh	 pandey 

  // taking user input string 
  string firstname;
  cout << "Enter your first name: ";
  cin >> firstname; // Jayesh
  string lastname; 
  cout << "Enter your last name: ";
  cin >> lastname; // Pandey
  string fullname = firstname + " " + lastname;
  cout << fullname; // Jayesh Pandey

  // c++ are case sensitive means that fullname are not equal to fullName
  // when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
  string fullName; 
  cout<<"Enter full name: ";
  getline(cin,fullName); // Jayesh pandey
  cout << "Your full name is: " << fullName; // Your full name is: Jayesh pandey

}


