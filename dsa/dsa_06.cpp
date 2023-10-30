// time and space complexity
/*
time complexity :- it is total time taken by an algorithm to run as a function of length of the input


  ^
 8|             -
 7|          - 
 6|       -
 5|     - 
 4|   -
 3| -                                                    3|
 2|-                                                     2|
 1|__________________________                            1|_________________________________

*/

// #include <iostream>
// using namespace std;
// int main() {
//   int arr[] = {10,5,2,30,1,20};
//   int length_arr = (end(arr) - begin(arr));
//   int ans = arr[0];
//   for (int i = 0; i < length_arr; i++)
//   {
//     if (arr[i] < ans)
//     {
//       ans = arr[i];
//     }
//   }
//   cout<<ans;
// }


// #include <iostream>
// using namespace std;
// int main() {
//   int arr[] = {10,5,2,30,1,20};
//   int length_arr = (end(arr) - begin(arr));
//   for (int i = 0; i < length_arr; i++)
//   {
//     for (int j = 0; j < length_arr; j++)
//     {
//       if (arr[i] < arr[j])
//       {
//         swap(arr[i], arr[j]);
//       }
//     }
//   }
//   for (int i = 0; i < length_arr; i++)
//   {
//     cout<<arr[i]<<endl;
//   }
  
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int arr[] = {10,5,2,30,1,20};
//   int count = (end(arr) - begin(arr));
//   for (int i = 0; i < count; i++)
//   {
//     for (int j = 0; j < count; j++)
//     {
//       if (arr[j] > arr[j+1])
//       {
//         swap(arr[j], arr[j+1]);
//       }
      
//     }  
//   }
//   for (int i = 0; i < count; i++)
//   {
//     cout<<arr[i]<<endl;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int arr[] = {10, 5, 2, 30, 1, 20};
//   int count = (end(arr) - begin(arr));
//   for (int i = 0; i < count-1; i++)
//   {
//     for (int j = 0; j < count-i-1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         swap(arr[j], arr[j + 1]);
//       }
//     }
//   }
//   for (int i = 0; i < count; i++)
//   {
//     cout << arr[i] << endl;
//   }
// }


// #include <iostream>
// using namespace std;
// int main() {
//   int arr[] = {10,5,2,30,1,20};
//   int count = (end(arr) - begin(arr));
//   for (int i = 0; i < count-1; i++)
//   {
//     for (int j = count-1; j > i; j--)
//     {
//       if (arr[j] < arr[j-1])
//       {
//         swap(arr[j], arr[j+1]);
//       }
//     }
//   }
//   for (int i = 0; i < count; i++)
//   {
//     cout<<arr[i]<<endl;
//   }
// }

/*
#include <iostream>
using namespace std;

int main() {
  int arr[] = {10, 5, 2, 30, 1, 20};
  int count = (end(arr) - begin(arr));
  for (int i = 0; i < count - 1; i++) {
    for (int j = count - 1; j > i; j--) {
      if (arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
      }
    }
  }
  for (int i = 0; i < count; i++) {
    cout << arr[i] << endl;
  }
}

*/

// [-1,1,2,3,1]

// #include <iostream>
// using namespace std;
// int main() {
//   int arr[] = {-1,1,2,3,1};
//   int count = (end(arr) - begin(arr));
//   for (int i = 0; i < count; i++)
//   {
//     for (int j = 0; j < count-1; j++)
//     {
//       if (arr[j]> arr[j+1])
//       {
//         swap(arr[j], arr[j+1]);
//       }
//     }
//   }
//   int ans;
//   for (int i = 0; i < count; i++)
//   {
//     ans = arr[0];
//     if (ans<arr[i])
//     {
//       ans = arr[i];
//     }
    
//   }
//   cout<<ans;
// }

#include <iostream>
using namespace std;
int main() {
  int arr[] = {-1,1,2,3,1};
  int count = (end(arr) - begin(arr));
  int small_ans = arr[0], large_num = arr[0];
  for (int i = 0; i < count; i++)
  {
    
    if (large_num < arr[i])
    {
      large_num = arr[i];
    }
    if (small_ans > arr[i])
    {
      small_ans = arr[i];
    }
  }
  for (int i = 0; i < count; i++)
  {
    if (arr[i] == large_num || arr[i] == small_ans)
    {
      continue;
    } else
    {
      cout<<arr[i]<<endl;
    }
  }
}