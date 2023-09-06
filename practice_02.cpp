// #include <iostream>
// using namespace std;
// int main() {
//     int side1,side2,side3;
//     cout<<"Enter first side of the triangle: ";cin>>side1;
//     cout<<"Enter Second side of the triangle: ";cin>>side2;
//     cout<<"Enter Third side of the triangle: ";cin>>side3;
//     if (side1+ side2 >side3)
//     {
//         cout<<"It is a triangle!";
//     } else if (side2+ side3 >side1)
//     {
//         cout<<"It is a triangle!";
//     } else if (side1+ side3 > side2)
//     {
//         cout<<"It is a triangle!";
//     }
// }

// one more way to write a conditional statement
// ternary operator 
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     (num%2==0)? cout<<"even number" : cout<<"odd number";
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num1,num2,num3;
//     cout<<"Enter first number: ";cin>>num1;
//     cout<<"Enter second number: ";cin>>num2;
//     cout<<"Enter Third number: ";cin>>num3;
//     if (num1>num2)
//     {
//         if (num1>num3)
//         {
//             cout<<"first number is greater than second and third number!";
//         } else
//         {
//             cout<<"Third number is greater than first and second number!";
//         }
//     }
//     if (num1<num2)
//     {
//         if (num2>num3)
//         {
//             cout<<"second number is greater than third and first number!";
//         } else
//         {
//             cout<<"Third number is greater than first and second number!";
//         }
//     } 
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int num1,num2;
//     cout<<"Enter first number: ";cin>>num1;
//     cout<<"Enter Second number: ";cin>>num2;
//     cout<<"1. addition of the two number"<<endl;
//     cout<<"2. substraction of the two number"<<endl;
//     cout<<"3. multiplication of the two number"<<endl;
//     cout<<"4. division of the two number"<<endl;
//     int choice;
//     cout<<"Enter your choice: ";cin>>choice;

//     switch (choice)
//     {
//     case 1:
//         cout<<"Addition of the two number is: "<<num1+num2;
//         break;
//     case 2:
//         cout<<"Substraction of the two number is: "<<num1-num2;
//         break;
//     case 3:
//         cout<<"Multiplication of the two number is: "<<num1*num2;
//         break;
//     case 4:
//         cout<<"division of the two number is: "<<num1/num2;
//         break;
//     default:
//         cout<<"Enter valid choice!";
//         break;
//     }
// }

#include <iostream>
using namespace std;
int main() {
    int x = 3,y,z;
    y = x = 10;
    z = x < 10; // x < 10 condition is fasle
    cout<<x<<" "<<y<<" "<<z;
}