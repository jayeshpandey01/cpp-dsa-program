// Loops can execute a block of code as long as a specified condition is reached.

// Loops are handy because they save time, reduce errors, and they make code more readable.

// while loop
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     while (num<10)
//     {
//         cout<<"Given number are smaller than 10!"<<endl;
//         num++;

//         // code will stop when user giving number greater than 10

//         // if user give number smaller than 10 then loop are work and it run (10-given number) times
//     }
    
// }


// do while loop
// #include <iostream>
// using namespace std;
// int main() {

//     // it's code represent where you want to start a number where you want end

//     int num;
//     cout<<"what is your choice: /n 1. Number 2. Alphabate /n";
//     cout<<"select your choice: ";cin>>num;

//     // it's code represent where you want to start a alphabate where you want end
    
//     if (num == 1)
//     {
//         int where_number;
//         cout<<"Enter Where number will start: ";cin>>where_number;
//         int here_number;
//         cout<<"Enter number where you want to end: ";cin>>here_number;

//         do
//         {
//             cout<< where_number <<endl;
//             where_number++;
//         } while (where_number <= here_number);
//     } 

//     // char where_number; // here we are using char data type beacause we want to print only charcter!
//     else if(num == 2)
//     {
//         char where_alphabate;

//         cout<<"Enter alphabate from where you start: ";cin>>where_alphabate;
//         char here_alphabte;
//         cout<<"Enter alphabate from where you want to end: ";cin>>here_alphabte;
//         do
//         {
//             cout<< where_alphabate <<endl;
//             where_alphabate++;
//         } while (where_alphabate <= here_alphabte); 
//     } 
//     // if condition or cghoice are not valid then else satemwnt will assicute
//     else
//     {
//         cout<<"Enter valid choice!";
//     }
// }


// for loops
// When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
// time conducting while loop is more than compare to for loop
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Select your choice: \n 1. numerical 2. alphabte"<<endl;
//     cout<<"Enter your choice: ";cin>>num;

//     if (num == 1)
//     {
//         int where_number;
//         cout<<"Enter number where you want to start: ";cin>>where_number;
//         int here_number;
//         cout<<"Enter number where you want to end: ";cin>>here_number;
//         for (int i = where_number; i <= here_number; i++)
//         {
//             cout<<i<<endl;
//         } 
//     } else if (num == 2)
//     {
//         int where_alphabhate;
//         cout<<"Enter alphabte where you want to strat: ";cin>>where_alphabhate;
//         int here_alphabte;
//         cout<<"Enter Number where you want to end: ";cin>>here_alphabte;
//         for (int j = where_alphabhate; j <= here_alphabte; j++)
//         {
//             cout<<j<<endl;
//         }
        
//     } else
//     {
//         cout<<"Enter valid choice!";
//     }
// }

// continue or brake statement
// if contion is true or loop whill end then we can use break statemnt for no ferther update 
#include <iostream>
using namespace std;
int main() {
    int i;
    cout<<"Enter a number: ";cin>>i;
    while (i<=10)
    {
        if (i == 4)
        {
            break; // brake statemnet are use to jump out from loops
        }
        cout<<i<<endl;
        i ++;
    }
}