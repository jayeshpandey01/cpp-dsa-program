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
