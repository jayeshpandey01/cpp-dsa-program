// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j;
            
//         }
//         cout<<endl;   
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char(64+j);
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num-i; j++)
//         {
//             cout<<" ";   
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i-j+1;
//         }
//         cout<<endl;
//     }
// }

/* Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/

// #include <iostream>
// using namespace std;
// int main() {
//     int nums[] = {2,7,11,15};
//     for (int i = 0; i <= 3; i++)
//     {
//         if (nums[i] + nums[i+1] == 9)
//         {
//             cout<<"["<<nums[i]<<","<<nums[i+1]<<"]";
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     string num1, num2;
//     cout<<"Enter first number: ";cin>>num1;
//     cout<<"Enter second number: ";cin>>num2;
//     cout<< stoi(num1) + stoi(num2);
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num; cout<<"Enter number: ";cin>>num;
//     int power; cout<<"Enter power of the number: ";cin>>power;
//     int mult = 1;
//     for (int i = 1; i <= 2; i++)
//     {
//         mult = mult*num;
//     }
    
//     cout<<mult;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= (num-i); j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= (num-i); j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char(64+j) <<" ";
//         } cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= (num-i); j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j <<" ";
//         } cout<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter number: ";cin>>num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= (num-i); j++)
        {
            cout<<char(64+j)<<" ";
        }
        for (int j = 1; j <= num-1; j--)
        {
            cout<<char(64+j)<<" ";
        }
        
         cout<<endl;
    }
}

// #include <iostream>
// using namespace std;

// void sum_of_array(int num1[], int num2[], int num) {
//     for (int i = 0; i < num; i++) {
//         int sum = num1[i] + num2[i];
//         cout << sum << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int num;
//     cout << "Enter number of array: ";
//     cin >> num;

//     int arr1[num], arr2[num];

//     cout << "Enter values of the first array" << endl;
//     for (int i = 0; i < num; i++) {
//         cout << "Enter value " << i << ": ";
//         cin >> arr1[i];
//     }

//     cout << "Enter values of the second array" << endl;
//     for (int i = 0; i < num; i++) {
//         cout << "Enter value " << i << ": ";
//         cin >> arr2[i];
//     }

//     sum_of_array(arr1, arr2, num);  // Pass the arrays and num to the function
//     return 0;
// }

/*
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;
// int main() {
//     int num1[] = {1,3};
//     int num2[] = {2};
//     int n1 = sizeof(num1)/sizeof(num1[0]);
//     int n2 = sizeof(num2)/sizeof(num2[0]);

//     sort(num1, num1+n1);
//     sort(num2, num2+n2);

//     vector<int> v(n1 + n2);
//     vector<int>::iterator it, st;
 
//     it = set_union(num1, num1 + n1, num2, num2 + n2, v.begin());
 
//     // Print the merged array
//     cout << "\nAfter joining:\n";
//     for (st = v.begin(); st != it; ++st)
//         cout << *st << ", ";
//     cout << '\n';
 
//     return 0;
// }



/*
vector => are to arrange the number in sequance

begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/


// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter number: ";cin>>num;
//     while (num>0)
//     {
//         int num1 = num%10;
//         cout<<num1;
//         num = num/10;
//     }
// }

/*
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/

