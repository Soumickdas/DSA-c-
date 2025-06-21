#include <bits/stdc++.h>
using namespace std;
// Move all zero
// void pushzero(vector<int>&arr)  {
//     int count=0;
//     for(int i=0;i<arr.size();i++) {
//         if(arr[i]!=0) {
//             swap(arr[i],arr[count]);
//             count ++;
//         }
//     }
// }


// problem 2 reversing an array
// void reverseArray(vector<int>&arr)  {
//     int left=0;
//     int right=arr.size()-1;
//     while (left < right)  {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }

// }
// problem 3 rotate the array
void rotateArr(vector<int>&arr,int d)  {
    int n = arr.size();
    d%=n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
int main ()  {
    vector<int> arr={1, 2, 0, 4, 3, 0, 5, 0};
    int d=2;
    // pushzero(arr);
    // reverseArray(arr);
    rotateArr(arr,d);
    for (int i : arr) {
        cout << i << " ";
    }

}
