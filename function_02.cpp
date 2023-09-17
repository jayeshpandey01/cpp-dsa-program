// #include <iostream>
// using namespace std;
// int value(int num) {
//     int mult = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         mult *= i;
//     }
//     return mult;
// }
// int main() {
//     int n,r,permutation;
//     cout<<"Enter the value of n: ";cin>>n;
//     cout<<"Enter the value of r: ";cin>>r;
//     permutation = value(n)/value(n-r);
//     cout<<"The value of permutation is: "<<permutation;
// }


// pascal triangle 
// #include<iostream>
// using namespace std;
// int factorial(int num) {
//     int mult = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         mult *= i;
//     }
//     return mult;
// }
// int ncr(int num1, int num2) {
//     int a = factorial(num1);
//     int b = factorial(num2);
//     int c = factorial(num1-num2);
//     return a/(b*c);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";cin>>n;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int fraction(int num) {
//     int mult = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         mult *= i;
//     }
//     return mult;
// }
// int value(int num1,int num2) {
//     return (fraction(num1)/(fraction(num2)*fraction(num1-num2)));
// }
// int main() {
//     int num;
//     cout<<"Enter the nth number: ";cin>>num;
//     for (int i = 0; i <= num; i++)
//     {
//         for (int j = 0; j <= num-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<value(i,j)<<" ";
//         }
//         cout<<endl;
//     }
// }

// Swap by using extra variable
// pass by values
// #include <iostream>
// using namespace std;
// int swap(int a,int b) {
//     int c = a;
//     a = b;
//     b = c;
//     cout<<"Value of the first number is: "<<a<<endl;
//     cout<<"Value of second number is: "<<b<<endl;
// }
// int main() {
//     int num1,num2;
//     cout<<"Enter First number: ";cin>>num1;
//     cout<<"Enter Second number: ";cin>>num2;
//     swap(num1,num2);
// }

// swap without extra variable
// #include <iostream>
// using namespace std;
// int swapValue(int num1, int num2){
//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;
//     cout<<"Value of the first number is: "<<num1<<endl;
//     cout<<"Value of second number is: "<<num2<<endl;
// }
// /*
// suppose num1 = 10, num2 = 20
// num1 = num1 + num2 ==> 10 + 20 = 30
// num2 = num1 - num2 ==> 30 - 20 = 10
// num1 = num1 - num2 ==> 30 - 10 = 20
// */
// int main() {
//     int a,b;
//     cout<<"Enter First value: ";cin>>a;
//     cout<<"Enter Second variable: ";cin>>b;
//     swapValue(a,b);
// }

// pass by value and pass by referance
