// adress
// #include <iostream>
// using namespace std;
// int main() {
//     int x = 3;
//     cout<<&x<<endl;
//     // 0x61ff0c it is the adress of value x 
// }

// #include <iostream>
// using namespace std;
// void swap(int& x,int&y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main() {
//     int x = 12;
//     int y = 20;
//     swap(x,y);
//     cout<<"Value of x after swap is: "<<x<<endl;
//     cout<<"Value of y after swap is: "<<y;
// }

// pointers ==> Acess the value of the variable choose adress is in the pointers using dereference /* operator
// #include <iostream>
// using namespace std;
// int main() {
//     int x = 3;
//     int * ptr = &x;
//     cout<<ptr<<endl;
//     cout<<&x<<endl;
//     cout<<*ptr<<endl; // star operator by using that pitch the value
//     cout<<&ptr<<endl; // show the adress of the operator
//     *ptr = 20;
//     cout<<x<<endl;
// }

// swap value in pointers
// #include <iostream>
// using namespace std;
// void swap(int* a,int* b) {
//     int temp = *a; // temp = 10
//     *a = *b; // *a = 20
//     *b = temp;
// }
// int main() {
//     int x = 12;
//     int y = 20;
//     swap(&x,&y);
//     cout<<"Value of x after swap is: "<<x<<endl;
//     cout<<"Value of y after swap is: "<<y;
// }

// max function by using multiple return statement
#include <iostream>
using namespace std;
int maxValue(int a, int b){
    if (a>b)
    {
        return a;
    } else
    {
        return b;
    }
}
int main() {
    cout<<maxValue(10,20);
}
