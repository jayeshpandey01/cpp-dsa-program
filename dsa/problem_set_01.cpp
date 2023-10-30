// Write a function that takes the base and height of a triangle and return its area.
// #include <iostream>
// using namespace std;
// int area_of_triangle(int &base, int &height) {
//     return base*height;
// }
// int main() {
//     int base, height;
//     cout<<"Enter base of the triangle: ";cin>>base;
//     cout<<"Enter height of the triangle: ";cin>>height;
//     cout<<"Area of a triangle is: "<<area_of_triangle(base,height);
// }

// Write a function that converts hours into seconds.
// #include <iostream>
// using namespace std;
// int in_sec(int &time) {
//     return time*60*60;
// }
// int main() {
//     int time;
//     cout<<"Enter time in hours: ";cin>>time;
//     cout<<"convert hours into second: "<<in_sec(time);
// }

// Create a function that takes two integers and checks if they are equal, grater than and smaller than.
// #include <iostream>
// using namespace std;
// int compare_number(int &num1,int &num2) {
//     if (num1 == num2)
//     {
//         cout<<"first number and second number are equal!";
//     } else if(num1>num2)
//     {
//         cout<<"first number is greater than second number!";
//     } else if(num1<num2)
//     {
//         cout<<"Second number is greter than first number!";
//     }
// }
// int main() {
//     int num1,num2;
//     cout<<"Enter First number: ";cin>>num1;
//     cout<<"Enter Second number: ";cin>>num2;
//     compare_number(num1,num2);
// }

// The farmer has counted his animals and he gives you a subtotal for each species. You have to implement a function that returns the total number of legs of all the animals.
// #include <iostream>
// using namespace std;
// int animal(int &chicken, int &cows, int &pigs) {
//     cout<<"Number of legs: "<<chicken*2 + cows*4 + pigs*4;
// }
// int main() {
//     int chicken, cows,pigs;
//     cout<<"Enter number of chicken: ";cin>>chicken;
//     cout<<"Enter number of cows: ";cin>>cows;
//     cout<<"Enter number of pigs: ";cin>>pigs;
//     animal(chicken,cows,pigs);
// }

/*
Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/
#include <iostream>
using namespace std;
int reverse_number(int &num) {
    while (num>0 || num<0)
    {
        int num1;
        num1 = num%10;
        num = num/10;
        cout<<num1;
    }
}
int main() {
    int num;
    cout<<"Enter number: ";cin>>num;
    reverse_number(num);
}