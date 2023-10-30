// #include <iostream>
// using namespace std;
// int main() {
//     int num; cout<<"ENter number array you want: ";cin>>num;
//     int arr[num];
//     for (int i = 0; i < num; i++)
//     {
//         cout<<"Enter the value of "<<i<<" : ";
//         cin>>arr[i];
//     }

//     int find_num;
//     cout<<"Enter the number that your index you wan't: ";
//     cin>>find_num;

//     for (int i = 0; i < num; i++)
//     {
//         if (arr[i] == find_num)
//         {
//             cout<<"The index value is: "<<i<<endl;
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int num;cout<<"Enter number of integer you wan't to store: ";cin>>num;
//     int array1[num],array2[num];
//     cout<<"Enter value of first array: "<<endl;
//     for (int i = 0; i < num; i++)
//     {
//         cin>>array1[i];
//     }
//     cout<<"Enter value of second array: "<<endl;
//     for (int i = 0; i < num; i++)
//     {
//         cin>>array2[i];
//     }
//     sort(array1, array1 + num);
//     sort(array2, array2 + num);
//     for (int i = 0; i < num; i++)
//     {
//         if (array1[i] == array2[i])
//         {
//             cout<<"array1["<<i<<"] == array2["<<i<<"]"<<endl;
//         }
//         else
//         {
//             cout<<"array1["<<i<<"] != array2["<<i<<"]"<<endl;
//         } 
//     }
// }

// bubble short

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {10,5,8,3,1,7};
//     int count = (end(arr) - begin(arr));
//     for (int i = 0; i < count; i++) 
//     {
//         for (int j = 0; j < count-1; j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     for (int i = 0; i < count; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {64,25,12,22,11};
//     int count = (end(arr) - begin(arr));
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count-1; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }
//     for (int i = 0; i < count; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {64,25,12,22,11};
//     int count = (end(arr) - begin(arr));
//     for (int i = 0; i < count-1; i++)
//     {
//         for (int j = count - 1; j > i; j--)
//         {
//             if (arr[j] < arr[j-1])
//             {
//                 swap(arr[j], arr[j-1]);
//             }
//         }
//     }
//     for (int i = 0; i < count; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main() {
    
}