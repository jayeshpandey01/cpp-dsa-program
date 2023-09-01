// function

// #include <iostream>
// using namespace std;
// int myFunction(){
//     int num1;
//     cout<<"Enter first number: ";cin>>num1;
//     int num2;
//     cout<<"Enter Second number: ";cin>>num2;
//     int sum = num1 +num2;
//     return sum;
// }
// int main() {
//     int sum = myFunction();
//     int average = sum / 2;
//     cout<<"average of the two number is: "<<average;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// void myFunction(string name) {
//     cout << name << " Pandey"<<endl;
// }

// int main() {
//     myFunction("Jayesh");
//     myFunction("Yogesh");
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// void myFunction(string place = "mumbai"){
//     cout<<place<<endl;

// }
// int main() {
//     myFunction("Pune");
//     myFunction("Bengrol");
//     myFunction(); // it default store value mumbai so it will print mumbai
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// void myFunction(string name, int age){
//     cout << "Name of the student is: "<<name <<"\t"<<"Age of the student: "<<age<<endl;

// }
// int main() {
//     myFunction("jayesh", 18);
//     myFunction("harsh", 19);
//     myFunction("yash",19);
// }

// #include <iostream>
// using namespace std;
// int myFunction(int num1,int num2) {
//     cout<<"Sum of the two number is: "<<num1 + num2<<endl;
// }
// int main() {
//     int num;
//     cout<<"Enter number for how many time loops are work: "; cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         int num1;
//         cout<<"Enter first number: ";cin>>num1;
//         int num2;
//         cout<<"Enter second number: ";cin>>num2;
//         myFunction(num1, num2);
//     }
// }

// #include <iostream>
// using namespace std;
// int swapNum(int &x , int &y) {
//     int z = x;
//     x = y;
//     y = z;
    
// }
// int main() {
//     int firstNUm;
//     cout<<"ENter first number: "; cin>>firstNUm;
//     int secondNum;
//     cout <<"Enter Second number: "; cin>>secondNum;
//     cout << "Befor swap first number are: " << firstNUm << "\t"<<"Before Swap Second number will be: "<< secondNum <<endl;
//     swapNum(firstNUm , secondNum);
//     cout << "After swap first number are: " << firstNUm << "\t"<<"After Swap Second number will be: "<< secondNum <<endl;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int array[3] = {10,20,30};
//     array[1] = 60;
//     cout<< array[1] << endl;

//     string car[5] = {"Volvo","BMW","mercedics","TATA","Jaguar"};
//     cout << car[4] <<endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << car[i] << "\t";
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     string car[2];
//     car[0] = "BMW";
//     car[1] = "TATA";
//     car[2] = "Tesla";
//     for (int i = 0; i < 2; i++)
//     {
//         cout<<car[i]<<endl;
//     }
//     int num[5] = {0,2,16,6,1};
//     cout << sizeof(num) << endl; // 4*5 = 20
//     cout << sizeof(num) / sizeof(car);
    
// }

#include <iostream>
using namespace std;
class laptop {
    public:
    string brand;
    string model;
    int price;
    string storage;

};
int main() {
    laptop laptop1,laptop2;
    // first laptop
    laptop1.brand = "HP";
    laptop1.model = "Pavillion";
    laptop1.price = 45000;
}