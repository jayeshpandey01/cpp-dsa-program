// convert small alphabate into big alphabte
// #include <iostream>
// using namespace std;
// int convert_character(char &character) {
//     int char_value = int(character);
//     cout<<"big character: "<<char(char_value-32);

// }
// int main() {
//     char character; cout<<"Enter character: ";cin>>character;
//     convert_character(character);
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int value = 12;
//     int count = 0, ans_of_value;
//     while (value > 0)
//     {
//         value =value/10;
//         count++;
//     }
//     int ans[count];
//     int i = 0;
//     while (value > 0)
//     {
//         ans_of_value = value%10;
//         value = value/10;
//         ans[i] = ans_of_value;
//         i++;
//     }
//     cout<<ans[1]<<endl;
// }

// #include <iostream>
// using namespace std;

// int value_ans(int ans, int count) {
//     int mult = 1;
//     for (int i = 0; i < count; i++) {
//         mult *= ans;
//     }
//     return mult; // Add a return statement
// }

// int main() {
//     int value; cout<<"Enter number: ";cin>>value;
//     int count = 0, ans_of_value;
//     int temp_value = value; // Store the original value in a separate variable

//     while (temp_value > 0) {
//         temp_value = temp_value / 10;
//         count++;
//     }

//     int ans[count];
//     int i = 0;
//     temp_value = value; // Reset temp_value to the original value

//     while (temp_value > 0) {
//         ans_of_value = temp_value % 10;
//         temp_value = temp_value / 10;
//         ans[i] = ans_of_value;
//         i++;
//     }
    
//     cout << ans[0] << endl;
//     int solution[count];
//     int add = 0;
    
//     for (int i = 0; i < count; i++) {
//         solution[i] = value_ans(ans[i], count); // Store the result in the solution array
//         add += solution[i];
//     }
    
//     cout << "Result: " << add << endl;
//     if (add == value)
//     {
//         cout<<"Given number is armstrong number!";
//     } else
//     {
//         cout<<"given number is not armstrong number!";
//     } 
// }

// #include <iostream>
// using namespace std;
// int main() {
//     long num;cout<<"Enter number: ";cin>>num;
//     long mult = 1;
//     long count = 0;
//     for (long i = 1; i <= num; i++)
//     {
//         mult *= i;
//         if (i%5 == 0)
//         {
//             count++;
//             if (i/5 >= 5)
//             {
//                 count=count+1;
//             }
//         }
//     }
//     cout<<mult<<endl;
//     cout<<count;
// }

/*
Example 1:
Input: x = 2.00000, n = 10
Output: 1024.00000

Example 2:
Input: x = 2.10000, n = 3
Output: 9.26100

Example 3:
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
*/
#include <iostream>
using namespace std;
int main() {
    double num, power;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter power of the number: ";
    cin >> power;

    if (power == 0) // Use '==' for comparison, not '='
    {
        cout << 1; // Any number to the power of 0 is 1.
    }
    else if (power > 0)
    {
        double result = 1;
        for (int i = 0; i < power; i++)
        {
            result *= num;
        }
        cout << result;
    }
    else
    {
        double result = 1;
        for (int i = 0; i < -power; i++) // Change 'power' to '-power' for the correct number of iterations
        {
            result *= num;
        }
        cout << (1 / result);
    }
}
