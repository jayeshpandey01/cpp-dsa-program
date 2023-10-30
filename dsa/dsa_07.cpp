// mountaion array

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {2,4,6,8,10,8,5};
//     int length_arr = (sizeof(arr)/sizeof(arr[0]));
//     int mid, initial = 0;
//     while (initial <= length_arr)
//     {
//         mid = initial + (length_arr - initial)/2;
//         if (arr[mid-1] < arr[mid] && arr[mid+1]>arr[mid])
//         {
//             cout<<mid; break;
//         } else if (arr[mid-1]<arr[mid])
//         {
//             initial = mid+1;
//         } else 
//         {
//             length_arr = mid - 1;
//         }
//     }
// }


// rotation array
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {4,6,8,10,1,2};
//     int count = (end(arr) - begin(arr));
//     int ans, value1 = 0, value2 = 0;
//     cout<<"Enter index value: " ;cin>>ans;
//     if (ans > arr[ans])
//     {
//         cout<<"Increase in right hand side!";
//         for (int i = 0; i < ans-1; i++)
//         {
//             if (arr[ans] < arr[i])
//             {
//                 value1 = arr[i];
//             }
//         } 
//         cout<<"Value is: "<<value1;
//     } else
//     {
//         for (int i = ans+1; i < count; i++)
//         {
//             if (arr[ans] > arr[i])
//             {
//                 value2 = arr[i];
//             }
            
//         }
//         cout<<"value is: "<<value2;
        
//     }
// }


