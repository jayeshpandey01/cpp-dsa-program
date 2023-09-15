// c++ function
// function is a black box which take some input ab=nd produce an output after some processing

// syntax
/* 
return_type function_name(parameter1,parameter2,..){
    statement;
}
 */
// return type ==> it defin the data type and value reterned from a function. if we want the function to return a value, we can use a data type(int,float,etc). in case function doesn't return we can use void
// function name ==> each function has it's own name for easy identification

// argument of main() function??

// #include <iostream>
// using namespace std;
// int add(int x , int y) {
//     int result = x+y;
//     return result;
// }

// int main() {
//     cout<<"Addition of the two number: "<<add(5,6);

//     return 0;           
// }

// stack ==> last in first out
// call stack ==> in a c++ language any program are written last they call in first or we can say it will be first out it is a function of call stack
// stack fram ==> define the compiler wehere we write the code or by compiling time where the line are exicuting and all
// #include <iostream>
// using namespace std;
// int addition(int x, int y){
//     int result = x+y;
//     return result;
// }

// void intro(string name) {
//     cout<<"Are you having fun "<<name<<" ?"<<endl;
// }

// int main() {
//     intro("Jayesh"); // why we does not write here data type because data type are use to store some value but this function content void data type void does't content any data type soo we canot write any data type
//     int responce = addition(10,20);
//     cout<<"Addition of the two number are: "<<responce;
//     return 0;
// }

// function prototype ==> if we want to define a function after the function call, we need to use the function prototype.
// #include <iostream>
// #include <math.h> // for accesing sqrt we want to write the c++ file
// using namespace std;
// void info(string name);


// int main() {
//     info("jayesh");
//     cout<<sqrt(10)<<endl; // it is a standard library function ==> it inbild library in c++ program
//     return 0;
// }

// void info(string name) {
//     cout<<"Hello "<<name<<" !"<<endl;
// }

// #include <iostream>
// using namespace std;
// int square(int x) {
//     int sq = x*x;
//     return sq;
// }
// int main() {
//     for (int i = 1; i <= 5; i++)
//     {
//         cout<<"Square of "<<i<< " is: "<< square(i)<<endl;
//     }
    
// }

// #include <iostream>
// using namespace std;
// int area_of_circle(int radius) {
//     int area = 3.14*radius*radius;
//     return area;
// }
// int circumference_of_circle(int radius) {
//     int circumference = 2*3.14*radius;
//     return circumference;
// }
// int main(){
//     int r1;
//     cout<<"Enter raddius of a circle: ";cin>>r1;
//     cout<<"Area of a circle is: "<<area_of_circle(r1)<<endl;
//     cout<<"Circumfernce of a circle is: "<<circumference_of_circle(r1)<<endl;
// }

// #include <iostream>
// using namespace std;
// int voter(int age){
//     if (age > 18)
//     {
//         cout<<"you are eligible for voting!";
//     } else {
//         cout<<"Your are not eligible for voting!";
//     }
    
// }
// int main() {
//     int vote;
//     cout<<"Enter your age: ";cin>>vote;
//     voter(vote);
// }

// #include <iostream>
// using namespace std;
// bool odd_number(int num) {
//     if (num%2 == 0)
//     {
//         cout<<"Even Number: ";
//     } else
//     {
//         cout<<"Odd number: ";
//     }
// }
// int main() {
//     int a =1,b=10;
//     for (int i = a; i <= b; i++)
//     {
//         if (odd_number(i))
//         {
//             cout<<i<<endl;
//         }
//     }
// }


// #include <iostream>
// using namespace std;
// bool prime_number(int num){
//     for (int i = 2; i <= (num-1); i++)
//     {
//         if (num%i == 0)
//         {
//             return false;
//         }
        
//     }
//     return true;  
// }
// bool prime_number_better(int num){
//     for (int i = 2; i*i <= num; i++)
//     {
//         if (num %2 ==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int a =2, b = 10;
//     for (int i = a; i <= b; i++)
//     {
//         if (prime_number_better(i))
//         {
//             cout<<i<<endl;
//         }
//     }
// }

