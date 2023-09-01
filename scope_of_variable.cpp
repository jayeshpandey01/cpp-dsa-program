// scope means visibility of variable
// type of scope ==> global variable and local variable

// global scope ==> varibale that are outside all blocks or function in a program, and they can be acced any where in the program

// #include <iostream>
// using namespace std;
// string name ="Jayesh"; // global variable
// void person() {
//     cout<<name<<endl;
// }
// int main() {
//     cout<<name<<endl;
//     name = "pandey";
//     person();
// }

// loacl scope or variable ==>variable that are end a function block and can be accesed inside it only they are unknown antities outside the block
// #include <iostream>
// using namespace std;
// void persion() {
//     // cout<<age; // it show error because age value initilise next line
//     int age; // it is know as a local scope
//     cout<<age; // it does not show error infact inside the age the value will be not define alse beacuse in c++ after define the value a garage value are define so it does not show error.
//     for (int i = 1; i <= 5; i++)
//     {
//         cout<<i <<endl;
//     }
//     // cout<<i; //it's show error because i value define in for block then i become local variable so it cannot define outside the class
// }
// int main() {
//     persion();
// }

// fromal parameter ==> parameter that are define during function defination is called formal parameter
// actual parameter ==> parameter that are define during function defination are called actual parameter

// pass by value and pass by reference 
// #include <iostream>
// using namespace std;
// int swap(int x,int y) {
//     int temp = x;
//     x= y;
//     y = temp;
// }
// int main() {
//     int i = 10, j = 20;
//     swap(i,j);
//     cout<<i<<" "<<j<<"\n"; // does not change beacuse it working on condition pass by value it means that only value will copy not it will change
//     return 0;
// }

// pass by reference
// #include <iostream>
// using namespace std;

// // void swap(int &x,int &y) {
// //     int temp = x;
// //     x = y;
// //     y = temp;
// // }
// void fun(int *x){
//     cout<<x<<endl;
// }
// int main() {
//     // int x  = 9;
//     // int c = 1;
//     // int &y = x;
//     // swap(x,c);
//     // cout<<x<<" "<<c<<"\n";

//     int x = 9;
//     fun(&x); // printing adress of the value 

//     // int x = 9;
//     // int &y = x;
//     // cout<<x<<" "<<y<<"\n";
//     // y = 88;
//     // cout<<x<<" "<<y<<"\n";
// }

// Default parameter value
#include <iostream>
using namespace std;
void value(int x, int y, int z = 8){ // but we can not directly define value of x; we define value from right to left

}