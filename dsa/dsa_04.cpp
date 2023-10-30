// function 
// #include <iostream>
// using namespace std;
// int prime_number(int &num) {
//     if (num < 2)
//     {
//         return 0;
//     }
//     cout<<"prime number are: ";
//     for (int i = 2; i <= num; i++)
//     {
//         if (i%2==0)
//         {
//             cout<<i<<", ";
//         }
//     }
//     cout<<endl;
    
// }
// int factorial(int &num) {
//     int mult = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         mult *= i;
//     }
//     cout<<"factorial of the number is: ";
//     cout<<mult<<endl;
// }
// int main() {
//     int num;cout<<"Enter number: ";cin>>num;
//     prime_number(num);
//     factorial(num);
// }

// cube by using function
// #include <iostream>
// using namespace std;
// int cube(int &num) {
//     cout<<"cube of the number is: "<<num*num*num<<endl;
// }
// int main() {
//     int num;cout<<"Enter number: ";cin>>num;
//     cube(num);
// }

// reverse number by using function
// #include <iostream>
// using namespace std;
// int reverse(int &num) {
//     int value,ans=0;
//     while (num != 0)
//     {
//         value = num%10;
//         ans = ans*10+value;num = num/10;
//     }
//     cout<<ans;
// }
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     reverse(num);
// }

// swap three number
// #include <iostream>
// using namespace std;
// int swap_three(int &num1,int &num2,int &num3) {
//     int temp = num1;
//     num1 = num2;
//     num2 = num3;
//     num3 = temp;
//     cout<<"After swap first number are: "<<num1<<endl;
//     cout<<"After swap second number are: "<<num2<<endl;
//     cout<<"After swap Third number are: "<<num3<<endl;
// }
// int main() {
//     int num1,num2,num3;
//     cout<<"Enter first number: ";cin>>num1;
//     cout<<"Enter second number:" ;cin>>num2;
//     cout<<"Enter Third number: ";cin>>num3;
//     swap_three(num1,num2,num3);
// }

// n time print value
// #include <iostream>
// using namespace std;
// int printing_n_time(int num) {
//     for (int i = 1; i <= num; i++)
//     {
//         cout<<"Hello jayesh!"<<endl;
//     }
    
// }
// int main() {
//     int num;
//     cout<<"Enter how many time you want to print vlaue: ";cin>>num;
//     printing_n_time(num);
// }

// calculate combinations n!/r! *(n-r)
// #include <iostream>
// using namespace std;
// int factorial(int num) {
//     int mult = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         mult *=  i;
//     }
// }
// int main() {
//     int n,r;
//     cout<<"Enter value of n: ";cin>>n;
//     cout<<"Enter value of r: ";cin>>r;

//     cout<<"calculation of combinations: "<<(factorial(n)/factorial(r)) * factorial(n-r) ;
// }