// array ==> it store same type of data type, 
// #include <iostream>
// using namespace std;
// int main() {
//     int a[10];
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     cout<<"Enter array value "<<i<<" : ";
//     //     cin>>a[i];
//     // }
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     cout<<"value of "<<i<<" : "<<a[i]<<endl;
//     // }
//     cout<<a+a[0]*sizeof(a); // address of index

// }  

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5] = {2,6,4,1,10};
//     int min_value = arr[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < min_value)
//         {
//             min_value = arr[i];
//         }
//     }
//     cout<<"Min value is: "<<min_value<<endl;
//     int max_value = arr[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > max_value)
//         {
//             max_value = arr[i];
//         }
        
//     }
//     cout<<"Max value is: "<<max_value;
    
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5];
//     int sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter "<<i<<" index value in array: ";cin>>arr[i];
//         sum += arr[i];
//     }
//     cout<<"sum of given value is: "<<sum<<endl;
//     cout<<"average of the given value is: "<<sum/5;

// }

/*
Searching element
linear search
*/
/*
// linear search
#include <iostream> 
using namespace std;
int main() {
    // taking input from user
    int num;cout<<"Enter number That u wan't to search into the array: ";cin>>num;

    // store array element
    int array_element[] = {10, 50, 6 , 58, 20, 55, 60, 32, 25};

    // searching length of the array
    int length_array = (end(array_element)- begin(array_element));

    // loop for matching the value
    for (int i = 0; i < length_array; i++)
    {
        // check condition
        if (array_element[i] == num)
        {
            cout<<"Index value of the given input is: "<<i;
        }
    } 
}*/

/*
reverse array
*/
// #include <iostream> 
// using namespace std;
// int main() {
//     int element_array[] = {10,20,30,40,50,60};
//     int length_array = (end(element_array) - begin(element_array));
//     int temp_array[length_array];
//     int i = length_array, j = 0;
//     while (i >= 0)
//     {
//         temp_array[j] = element_array[i];
//         j++;
//         i--;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
    
//     int array_element = (end(arr) - begin(arr));
//     int start = 0 , end_value = 4;
//     while (start < end_value)
//     {
//         swap(arr[start], arr[end_value]);
//         start++;
//         end_value--;
//     }
//     for (int i = 0; i < array_element; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

// #include <iostream>
// #include <climits> // Include this for INT_MIN
// using namespace std;

// int main() {
//     int arr[] = {10, 12, 15, 8, 13, 6, 19, 20};
//     int length_arr = (end(arr) - begin(arr));
//     int ans = INT_MIN; // Use INT_MIN instead of INT8_MIN

//     // First largest number
//     for (int i = 0; i < length_arr; i++) {
//         if (arr[i] > ans) {
//             ans = arr[i];
//         }
//     }
//     cout << "First Largest: " << ans << endl;

//     // Second largest number
//     int second_ans = INT_MIN;
//     for (int i = 0; i < length_arr; i++) {
//         if (arr[i] != ans && arr[i] > second_ans) {
//             second_ans = arr[i];
//         }
//     }
//     if (second_ans != INT_MIN) {
//         cout << "Second Largest: " << second_ans << endl;
//     } else {
//         cout << "No second largest element found." << endl;
//     }
// }


// check smallest and second smallest number
// #include <iostream>
// #include <climits>
// using namespace std;
// int main() {
//     int arr[] = {10, 12, 8, 16, 5, 2, 18};
//     int length_arr = (end(arr) - begin(arr));
//     int ans = INT_MAX;
//     // first smallest number
//     for (int i = 0; i < length_arr; i++)
//     {
//         if (ans > arr[i])
//         {
//             ans = arr[i];
//         }
//     }
//     cout<<ans<<endl;

//     // second smallest number
//     int second_ans = INT_MAX;
//     for (int i = 0; i < length_arr; i++) {
//         if (arr[i] < ans) {
//             second_ans = ans; // Update the second_ans before ans
//             ans = arr[i];
//         } else if (arr[i] < second_ans && arr[i] != ans) {
//             second_ans = arr[i];
//         }
//     }
//     if (second_ans != INT_MAX)
//     {
//         cout<<second_ans;
//     }
// }


