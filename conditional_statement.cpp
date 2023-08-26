// conditional statement
// Use the if statement to specify a block of C++ code to be executed if a condition is true.
// Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.

// if statement
// #include <iostream>
// using namespace std;
// int main() {
//     if (20>15) // if this condition is true then code exicute then show error or it will go ferther condition
//     {
//         cout<<"20 is grether than 15! ";
//     } 
// }


// if-else statement 
// Use the else statement to specify a block of code to be executed if the condition is false.
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     if (num%2==0)
//     {
//         cout<<"Even number!";
//     } else
//     {
//         cout<<"Odd number!";
//     }  
// }


// else if statement 
// Use the else if statement to specify a new condition if the first condition is false.
// #include <iostream>
// using namespace std;
// int main() {
//     int marks;
//     cout<<"Enter total marks: ";cin>>marks;
//     if (marks>60)
//     {
//         cout<<"1st grade!";
//     } else if (marks>35)
//     {
//         cout<<"2nd grade!";
//     } else
//     {
//         cout<<"false!";
//     }  
// }

// switch case
// The switch expression is evaluated once
// The value of the expression is compared with the values of each case
// If there is a match, the associated block of code is executed
// The break and default keywords are optional, and will be described later in this chapter
// #include <iostream>
// using namespace std;
// int main() {
//     int day;
//     cout<<"Enter day: ";cin>>day;
//     switch (day)
//     {
//     case 1:
//         cout<<"Today is monday you have to ware white shirt";
//         break;
//     case 2:
//         cout<<"Today is tuesday you have to ware pink shirt";
//         break;
//     case 3:
//         cout<<"Today is wensday you have to ware blue shirt";
//         break;
//     case 4:
//         cout<<"Today is thusday you have to ware black shirt";
//         break;
//     case 5:
//         cout<<"Today is friday you have to ware green shirt";
//         break; 
//     case 6:
//         cout<<"Today is satarday you have to ware red shirt";
//         break;
//     case 7:
//         cout<<"Today is sunday you have to ware navi blue shirt";
//         break;
//     default:
//         cout<<"enter valid number! ";
//         break; // When C++ reaches a break keyword, it breaks out of the switch block.
//     }
// }

//  Create a C++ program that prompts the user for their age and determines whether they are eligible to vote (18 years or older) or not.
// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cout<<"Enter your age: ";cin>>age;
//     if (age>100)
//     {
//         cout<<"Enter valid age!";
//     } else if (age>18)
//     {
//         cout<<"you are aligible for vote!";
//     } else
//     {
//         cout<<"you are not aligible for vote!";
//     }  
// }

//  Create a C++ program that prompts the user for their age and determines whether they are eligible to vote (18 years or older) or not.
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c;
//     cout<<"Enter first number: ";cin>>a;
//     cout<<"Enter second number: ";cin>>b;
//     cout<<"Enter third number: ";cin>>c;
//     if (a>b)
//     {
//         if (a>c)
//         {
//             cout<<"first number is greather than second and first number! ";
//         } else
//         {
//             cout<<"third number is grether than first and second number!";
//         } 
//     } else
//     {
//         cout<<"second number is greater than first and third!";
//     }
// }

// Write a C++ program that takes a character input (a, b, c, d) representing a grade and uses a switch statement to print the corresponding description (Excellent, Good, Average, Poor).
// #include <iostream>
// using namespace std;
// int main() {
//     char grade;
//     cout<<"Enter your grade: ";cin>>grade;
//     switch (grade)
//     {
//     case 'a':
//         cout<<"Excellent!";
//         break;
//     case 'b':
//         cout<<"Good!";
//         break;
//     case 'c':
//         cout<<"Average!";
//         break;
//     case 'd':
//         cout<<"poor!";
//         break;
//     default:
//         cout<<"Bhai tu rande!";
//         break;
//     }
// }
