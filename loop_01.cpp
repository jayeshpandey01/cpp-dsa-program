// count number of digit for a given number n
/*#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter number for digits: ";cin>>num;
    int digit = 0;cout<<num<<endl;
    // while (num>0)
    // {
    //     digit++;
    //     num=num/10;
        
    //     cout<<num<<endl;
    // } 
    // cout<<"Number of digit is: "<<digit<<endl;
    for (; num > 0; digit++)
    {
        
        num = num/10;
        cout<<num<<endl;
    }
    cout<<"Number of digit is: "<<digit<<endl;
}*/

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     int sum = 0;

//     while (num>0)
//     {
//         cout<<num<<endl;
//         int value = (num%10);
//         sum += value;
//         num =num/10;
        
//     }
//     cout<<"sum of the digits is: "<<sum;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     while (num>0)
//     {
//         int value = num%10;
//         cout<<value;
//         num = (num/10);
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     int sum =0;
//     cout<<"Enter a number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         if (i%2==0)
//         {
//             sum-=i;
//         }else
//         {
//             sum+=i;
//         }
//     }
//     cout<<sum;
// }

// factorial
/* #include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter number: ";cin>>num;
    int mult = 1;
    while (num>0)
    {
        mult*=num;
        num = (num-1);
    }
    cout<<mult;
} */