// loop

// #include <iostream>
// using namespace std;
// int main() {
//     int n; // 3
//     cout<<"Enter number for how many time you want to print: ";cin>>n;
//     for (int i = 1; i <= n; i++)// i<=n are the loop condition, i=1 are initialization
//     {
//         cout<<"Hello jayesh"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num1,num2;
//     cout <<"Enter initial number: ";cin>>num1;
//     cout<<"Enter end number: ";cin>>num2;
//     int sum = 0;
//     for (int i = num1; i <= num2; i++)
//     {
//         sum+=i;
//     }
//     cout<< sum;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num1,num2;
//     cout <<"Enter initial number: ";cin>>num1;
//     cout<<"Enter end number: ";cin>>num2;
//     int sum = 0;
//     while (num1=num2)
//     {
//         sum += num1;
//         ++num1;
//     }
//     cout<<num1;
// }

// print even number from 1 to 100
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i%2==0)
//         {
//             cout<<i<<"\t";
//         }
//     }
// }

// without using if condition
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 0; i <= 100;i= i+2)
//     {
//         cout<<i<<" ";
//     }
// }

// printing odd number from 1 to 100
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i%2!=0)
//         {
//             cout<<i<<"\t";
//         }
//     }
// }

// without using if condition
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 100;i= i+2)
//     {
//         cout<<i<<" ";
//     }
// }

// printing tables
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number for table: ";cin>>num; 
//     for (int i = 1; i <= 10; i++)
//     {
//         cout<<num<<" * "<< i<< " = " <<i*num<<endl;
//     }
// }

// 4,7,10,....
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter nth number: ";cin>>num;
//     for (int i = 4; i <= num; i=i+3)
//     {
//         cout<<i<<", ";
//     }
// }

// a nth = a + (n-1)d
// 4,7,10,13,16,..
// a = 4, d = 3
// 3*n+1
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter how many number: ";cin>>n;
//     for (int i = 1; i <= 3*n-1; i=i+3)
//     {
//         cout<<i<<", ";
//     }
// }

// printing GP 1,2,4,8,16.....
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Last that you want to print: ";cin>>n;
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<a<<endl;
//         a=a*2;
//     }
// }

// GP 3,12,48...
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter how many time you want to print: ";cin>>n;
//     int a = 3;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<a<<" ";
//         a =a*4;
//     }
// }

// WAP to find the highest factor of a number 'n' (other than itself)
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     int a = 1; // it is use to print highest factor
//     for (int i = 1; i < num; i++)
//     {
//         if (num%i==0)
//         {
//             cout<<i << " ";
//             a = i;
//         }
//     }
//     cout<<a;
// }

// brake; statement
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";cin>>n;
//     for (int i = n/2; i >= 1; --i)
//     {
//         cout<<i<<" ";
//         break;
//     }
// }

// finding prime and composite number
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"ENter number: ";cin>>n;
//     for (int i = 0; i < n/2; i++)
//     {
//         if (n%2==0)
//         {
//             cout<<"Composite";
//             break;
//         } else
//         {
//             cout<<"prime number";
//             break;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";cin>>n;
//     bool flag = true;
//     for (int i = 2; i <= n/2; i++)
//     {
//         if (n%i==0)
//         {
//             flag = false;
//             break;
//         }
//     }
//     if (flag == true) cout<<"Prime";
//     else cout<<"Composite";
// }

// continue; statement
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 20; i++)
//     {
//         if (i==3 || i==8)
//         {
//             continue;
//         }
//         cout<<i<<" ";
//     }
// }

// or we can also write as
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 20; i++)
//     {
//         if (i!=3 && i!=8)
//         {
//             cout<<i<<" ";
//         }
//     }
// }

// WAP to print odd number from 1 to 100
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i%2==0) continue;
//         cout<<i<<" ";
//     }
// }
