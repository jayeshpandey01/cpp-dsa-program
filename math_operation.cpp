// c++ math

// #include <iostream>
// using namespace std;
// int main() {
//     int num1, num2;
//     cout<<"Enter first number: "; cin>>num1;
//     cout<<"Enter second number: ";cin>>num2;

//     // The max(num1,num2) function can be used to find the highest value of num1 and num2:
//     cout<<"Maximum number are: "<<max(num1,num2)<<endl;

//     // And the min(num1,num2) function can be used to find the lowest value of num1 and num2:
//     cout<<"Minimum number are: "<<min(num1, num2)<<endl;
// }

// c++ <cmath> Header
#include <iostream>
// Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file:
#include <cmath>
using namespace std;
int main() {
    // taking square root of the number we can use sqrt() function
    cout<< "square root by using sqrt() function: "<<sqrt(64)<<endl; // 8

    // taking round figer of any number we can use round() function
    cout<<"round figure by using round() function: "<<round(98.8) <<endl; // 99

    // taking log of number by using log() function
    cout<<"log of a number: "<<log(5) <<endl; // 1.60944

    // return absolute value by using function means that taking mode of any number |-x| = x
    cout<<"taking absolute value by using abs() function: "<<abs(-10.645)<<endl; // |-10.645| = 10.645

    // Returns the arccosine value by using function means that cos^-1(x)
    cout<<"Taking arccosine value by using acos() function: "<<acos(0.5)<<endl; // pi/3 = 3.14/3 = 1.046666666667

    // return arcsin value by using function means that sin^-1(x)
    cout<<"Taking arcsin value by using asin() function: "<<asin(0.87)<<endl; // 1.0552

    // return arctangent value by using function means that tan^-1(x)
    cout<<"Taking arctan value by using atan function: "<<atan(1)<<endl; // 0.785398

    // return cube root of the number cbrt(x)
    cout<<"Taking cube root of any number by using function: "<<cbrt(9)<<endl; // 3

    // returning the exponantial value by using function exp(x)
    cout<<"Taking expontial value by using function "<<exp(2)<<endl; // it means that e^2 

}
