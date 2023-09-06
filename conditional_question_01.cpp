// #include <iostream>
// using namespace std;
// int main() {
//     int num1;
//     cout<<"Enter number: ";cin>>num1;
//     if (num1%2==0)
//     {
//         cout<<"Even number!";
//     } else
//     {
//         cout<<"pdd number!";
//     } 
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"ENter number: ";cin>>num;
//     if (num%5==0)
//     {
//         cout<<"Number is divisible by 5!";
//     } else
//     {
//         cout<<"Number is not divisible by 5!";
//     } 
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     if (num%2==0)
//     {
//         if (num%3==0)
//         {
//             cout<<"number is divisible by 2, 3, 6!";
//         } else if (num%5==0)
//         {
//             cout<<"Number is divisible by 2, 5";
//         }else if (num%4==0)
//         {
//             cout<<"Number is divisible by 2, 4";
         
//         } else if (num%7==0)
//         {
//             cout<<"Number is divisible by 2, 7";
//         } else if (num%8==0)
//         {
//             cout<<"Number is divisible by 2, 8";
//         } else if (num%9==0)
//         {
//             cout<<"Number is divisible by 2, 9";
//         } 
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";cin>>n;
//     if (n<0)
//     {
//         cout<<n*-1 <<endl;
//     }else
//     {
//         cout<<n;
//     }

//     // this code also write as
//     if(n<0) n = -n;
//     cout<<n; 
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int sell_price, cost_price;
//     cout<<"Enter your selling price: ";cin>>sell_price;
//     cout<<"Enter your cost price: ";cin>>cost_price;

//     if (sell_price > cost_price)
//     {
//         cout<<"you are in profit of "<< (sell_price-cost_price) <<" RS"<<endl;
//     } else if (cost_price==sell_price)
//     {
//         cout<<"NO profit No loss!"<<endl;
//     }
//     else
//     {
//         cout<<"you are in loss of "<<(cost_price-sell_price)<<" RS"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int length,breath;
//     cout<<"Enter length of a rectangle: ";cin>>length;
//     cout<<"Enter breath of a rectangle: ";cin>>breath;
//     int area_of_rectangle = length*breath;
//     int parameter_of_rectangle = 2*(length+breath);
//     if (length == breath)
//     {
//         cout<<"It is a square!"<<endl;
//     }
    
//     cout<<"Area of a rectangle is "<<area_of_rectangle<<endl;
//     cout<<"parameter of a rectangle is "<<parameter_of_rectangle<<endl;
//     if (area_of_rectangle > parameter_of_rectangle)
//     {
//         cout<<"area of arectangle is greater than parameter of rectangle!";
//     } else if(area_of_rectangle==parameter_of_rectangle){
//         cout<<"Area of a rectangle is equal to the paramete of a rectangle!";
//     }
//     else
//     {
//         cout<<"parameter of a rectangle is greater than area of rectangle!";
//     } 
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int percentage;
//     cout<<"Enter your percentage: ";cin>>percentage;
//     if (percentage>100)
//     {
//         cout<<"Error: enter valid number!";
//     }else if (percentage>80)
//     {
//         cout<<"Very Good";
//     } else if (percentage > 60)
//     {
//         cout<<"Good";
//     } else if (percentage > 40)
//     {
//         cout<<"Average";
//     } else
//     {
//         cout<<"Fail";
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int x,y;
//     cout<<"Enter x-axis: ";cin>>x;
//     cout<<"Enter y-axis: ";cin>>y; 
//     if (x>0 && y>0)
//     {
//         cout<<"It is belonging to 1st quadrant!";
//     } else if (x>0 && y<0)
//     {
//         cout<<"It is belonging to 4th quadrant!";
//     } else if (x<0 && y>0)
//     {
//         cout<<"It is belonging to 2nd quadrant!";
//     } else if (x<0 && y<0)
//     {
//         cout<<"It is belonging to 3rd quadrant!";
//     }
// }
