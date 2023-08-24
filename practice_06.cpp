// operators
// Operators are used to perform operations on variables and values.

// #include <iostream>
// using namespace std;
// int main() {
//   int x = 10+20;
//   cout<<x; // 30;
//   int sum1 = 100 + 50;        // 150 = (100 + 50)
//   int sum2 = sum1 + 250;      // 400 = (150 + 250)
//   int sum3 = sum2 + sum2;     // 800 = (400 + 400)
//   cout << sum1 << "\n"; // 150
//   cout << sum2 << "\n"; // 400
//   cout << sum3; // 800
//   return 0;
// }

// Arithmetic operators
// #include <iostream>
// using namespace std;
// int main() {

//   int num1;
//   cout<<"Enter first number: ";cin>>num1;
//   int num2;
//   cout<<"Enter second number: ";cin>>num2;
//   // addition of the two number
//   int addition = num1 + num2;
//   cout<<"addition of the two number is: "<< addition << endl;

//   // substraction of two number
//   int substraction = num1 - num2;
//   cout<<"Substraction of the two number is: " << substraction <<endl;

//   // multiplication of two number
//   int multiplication = num1 * num2;
//   cout<< "Multiplication of the two number is: " << multiplication <<endl;

//   // division of two number 
//   int division = num1/num2;
//   cout<<"Division of the two number is: "<<division <<endl;

//   // moldulus
//   int modulus = num1%num2; // it is use to find the remender after divide the any number 
//   cout<<"Modulus of the two number is: "<< modulus <<endl;

//   // increment operator ==> value increase by one 
//   int preIncrement = ++num1; // pre-increment operator means that first of all the value will increase then will assign
//   cout<<"pre-increment of first number: "<<preIncrement<<endl;

//   int postIncremnet = num2++; // post-increment operator means that first assign the value then increase the value
//   cout<<"post-increment of the second number: "<<postIncremnet<<endl;

//  // decrement operators ==> value decrease by one 
//  int preDecrement = --num1; // pre-decrement operator means that first of all the value will decrease then will assign
//  cout<<"pre-decrement of first number: "<<preDecrement<<endl;
  
//  int postDecrement = num2--; // post-decrement operator means that first assign the value then decrese the value 
//  cout<<"post-decrement of second number: "<<postDecrement<<endl;

// }

// Assignment operators
// Assignment operators are used to assign values to variables.
// #include <iostream>
// using namespace std;

// int main() {
//     int num = 10;
//     cout << (num += 1) << endl; // num = num + 1  // 11
//     cout << (num -= 1) << endl; // num = num - 1  // 10
//     cout << (num *= 1) << endl; // num = num * 1  // 10
//     cout << (num /= 1) << endl; // num = num / 1  // 10
//     cout << (num %= 1) << endl; // num = num % 1  // 0
//     cout << (num &= 1) << endl; // num = num & 1  // 0
//     cout << (num |= 1) << endl; // num = num | 1  // 1
//     cout << (num ^= 1) << endl; // num = num ^ 1  // 0
//     cout << (num <<= 1) << endl; // num = num << 1  // 0
//     cout << (num >>= 1) << endl; // num = num >> 1  // 0
// }

// comparision operators
// #include <iostream>
// using namespace std;
// int main() {
//     int num1 = 10;
//     int num2 = 15;

//     cout<< (num1 == num2) << endl; // 0
//     cout<< (num1 != num2) << endl; // 1
//     cout<< (num1 >= num2) << endl; // 0
//     cout<< (num1 <= num2) << endl; // 1
//     cout<< (num1 < num2) << endl; // 1
//     cout<< (num1 > num2) << endl; // 0

// }

// logical operator
#include <iostream>
using namespace std;
int main() {
    int num1 = 10;
    int num2 = 15;
    cout<< (num1 < num2 && num1 > num2) << endl; // logical and // 0
    cout<< (num1 < num2 || num1 > num2) << endl; // logical or // 1
    cout<< !(num1 < num2 && num1 > num2) << endl; // logical not // 1
}
