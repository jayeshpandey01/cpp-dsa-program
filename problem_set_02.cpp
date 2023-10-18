/*
Input:
n = 4
arr[] = {1,2,3,4}
x = 3
Output: 2
*/
#include <iostream>
using namespace std;
int main() {
    int num;cout<<"Enter number: ";cin>>num;
    int arr[num], j = 1;
    for(int i = 0; i < num; i++){
        arr[i] = j;
        j++;
    }
    for(int i = 0; i < num; i++) {
        cout<<arr[i]<<endl;
    }
    int find_num;
    cout<<"Enter number that index you wan't to find: ";cin>>find_num;
    for(int i = 0; i < num; i++) {
        if(arr[i] == find_num) {
            cout<<i;
        }
    }
    return 0;
}

/*
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;cout<<"Enter number: ";cin>>num;
    int arr[num];
    for(int i = 0; i < num; i++){
        cout<<"Enter value of "<<i<<": ";
        cin>>arr[i];
    }
    sort(arr, arr + num);
    cout<<"After shorting array: "<<endl;
    for(int i = 0; i < num; i++) {
        cout<<arr[i]<<endl;
    }
}


/*
Swap array
*/
#include <iostream>
using namespace std;
int main() {
    int number[] = {10,20,30,40,50};
    int count_number = (end(number)- begin(number));
    int temp_number[count_number];
    int j = count_number;
    for(int i = 0; i < count_number; i++){
        temp_number[j] = number[i];
        j--;
    }
    for(int i = 0; i < count_number; i++) {
        cout<<temp_number[i]<<endl;
    }
}
