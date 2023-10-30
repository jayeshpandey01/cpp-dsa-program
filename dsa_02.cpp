// operator

// BODMAS ==> bracket, open, divide, multiple, add, sub

// Arithmetic operator--> Binary = (+, -, *, /, %) (int > float > double)
// {*, /, %} > {+, -} Associativity: left to right (2*3/4 = 1)
// unary = (++, --)
// post increment ==> a++ ==> first assign the value then increment
// pre increment ==> ++a ==> first increment then assign the value
// post decrement ==> a-- ==> first assign the value then decrement value
// pre decrement ==> --a ==> first decrement the value then assign value

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     cout<<a++<<endl; // 10
//     cout<<a<<endl; // 11
//     cout<<++a<<endl; // 12
//     cout<<a<<endl; // 12
// }

// comparision operator (==, <, >, <=, >=, !=)
/* 
5>4>3 ==> false because 5>4 => 1(true) then 1>3 => 0(false)
{>,<,>=,<=}> {==,!=} 
5>4<3==2 => 1<3 == 2 => 1 == 2 => 0
*/
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10, b = 20;
//     cout<< (a > b==a) <<endl; // 0
//     cout << (a < b)<<endl; // 1

//     if (a>b)
//     {
//         cout<<"A is greater than b"<<endl;
//     } else
//     {
//         cout<<"B is greater than A"<<endl;
//     }

//     cout<<(a>b !=2)<<endl; // 1 
// }

/*
Logical operator {&&, ||, !}
10 && 5 => 1
0 && 2 => 0 agar ek bhi zero hoga to zero output aayaga
0 || 6 => 1 ek bhi zero ho or dono number ho to output 1 dega
!5 => 0 
only 1 or 0 hoga to hi value change hogi nahi to zero print hogi
!1 => 0
!0 => 1
*/

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10, b = 20;
//     if (a>b && a!=b)
//     {
//         cout<<"a is greater than b and not equal"<<endl;
//     } else
//     {
//          cout<<"b is greater than a and not equal"<<endl;
//     }
    
//     char name;
//     cout<<"Enter charater: ";cin>>name;
//     if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u')
//     {
//         cout<<"vovel"<<endl;
//     } else
//     {
//         cout<<"consonant"<<endl;
//     }
// }

/*
bitwise operator => {&, |, ^,~, <<, >>}
2 & 3 => 10 & 11 => 10 => 2
2 | 3 => 10 | 11 => 11 => 3
2 ^ 3 => 10 ^ 11 => 01 => 1
2 << 1 => 2(00000010) << 1 => 000000100 => 4 => number * 2^x
2 >> 1 => 2(000000010)>> 1 => 000000001 => 1
~5 => ~ (00000000101) => (11111111010) => by using 2's compliment
{<<, >>} > {&, |, ^} 
*/
// #include <iostream>
// using namespace std;
// int main(){
//     cout<< (2&3) <<endl; // 2
//     cout<< (2|3) <<endl; // 3
//     cout<< (2^3) <<endl; // 1
//     cout<< (2<<1) <<endl; // 4
//     cout<< (2>>1) <<endl; // 1
//     cout<< (~5) <<endl; // -6
// }

// Assignment operator
/*
(*=, -=, +=, /=)
*/
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     cout<<(a *= 10)<<endl;
// }

//  Write a C++ program that calculates the area of a rectangle using the * operator for multiplication.
// #include <iostream> 
// using namespace std;
// int area_of_rectangle(int &length, int &breath) {
//     return length * breath;
// }
// int main() {
//     int length,breath;
//     cout<<"Enter length of the rectangle: ";cin>>length;
//     cout<<"Enter breath of the rectangle: ";cin>>breath;
//     cout<<"Area of a rectangle: "<<area_of_rectangle(length, breath);
// }

// Create a C++ program that compares two numbers entered by the user using the == operator and displays whether they are equal or not.
// #include <iostream>
// using namespace std;
// int compare_two_number(int &num1, int &num2) {
//     if (num1 == num2)
//     {
//         cout<<"First number and second number are equal!";
//     } else
//     {
//         cout<<"First number and second number are not equal!";
//     }
// }
// int main() {
//     int num1,num2;
//     cout<<"Enter first number: ";cin>>num1;
//     cout<<"Enter second number: ";cin>>num2;
//     compare_two_number(num1,num2);
// }

// Write a C++ program that checks if a number entered by the user is both greater than 10 and less than 20 using the && operator.
// #include <iostream>
// using namespace std;
// int check_number(int &num) {
//     if (num>10 && num>20)
//     {
//         cout<<"Given number are greater than 10 and 20!";
//     } else if(num<10 || num <20)
//     {
//         cout<<"Given number are smaller than 10 or 20!";
//     }
// }
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     check_number(num);
// }

// Create a C++ program that uses the increment ++ operator to count from 1 to 10 and displays each number.
// #include <iostream>
// using namespace std;
// int increment_number(int &num) {
//     while (num <= 10)
//     {
//         cout<<num<<endl;
//         num++;
//     }
// }
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     increment_number(num);
// }

// Write a C++ program that performs a bitwise XOR operation (^) on two integers entered by the user and displays the result in binary form.

// #include <iostream>
// using namespace std;
// int bitwise_operator_xor(int &num1, int &num2) {
//     return (num1^num2);
// }
// int main(){
//     int num1,num2;
//     cout<<"Enter First number: ";cin>>num1;
//     cout<<"Enter Second number: ";cin>>num2;
//     cout<<bitwise_operator_xor(num1,num2); // 10 ^ 11
// }

