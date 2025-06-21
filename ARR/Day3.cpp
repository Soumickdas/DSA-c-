// C++ Program to find the next permutation by 
// generating only next

#include <bits/stdc++.h>
using namespace std;
// Problem 1 find the Permutation
// void nextPermutation(vector<int> &arr) {
  
//     int n = arr.size(); 

//      // Find the pivot index
//     int pivot = -1; 
//     for (int i = n - 2; i >= 0; i--) {
//         if (arr[i] < arr[i + 1]) {
//             pivot = i;
//             break;
//         }
//     }

//     // If pivot point does not exist, reverse the
//     // whole array
//     if (pivot == -1) {
//         reverse(arr.begin(), arr.end());
//         return;
//     }

//     // find the element from the right that
//     // is greater than pivot
//     for (int i = n - 1; i > pivot; i--) {
//         if (arr[i] > arr[pivot]) {
//             swap(arr[i], arr[pivot]);
//             break;
//         }
//     }

//     // Reverse the elements from pivot + 1 to the 
//     // end to get the next permutation
//     reverse(arr.begin() + pivot + 1, arr.end());
// }
// Problem 2  Boyer-Moore’s Voting Algorithm

vector<int> findMajority(vector<int> &arr)  {
    int n = arr.size();
    int ele1=-1,ele2=-1;
    int cnt1=0,cnt2=0;
    for(int ele:arr) {
        if(ele1==ele) {
            cnt1++;
        }
        else if(ele2==ele) {
            cnt2;
        }
        else if(cnt1==0)  {
            ele1=ele;
            cnt1++;
        }
        else if(cnt2==0) {
            ele2=ele;
            cnt2++;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }
    vector<int> res;
    cnt1=0;
    cnt2=0;
    for(int ele:arr)  {
        if(ele1==ele) cnt1++;
        if(ele2==ele) cnt2++;
    }
    if(cnt1>n/3) res.push_back(ele1);
    if(cnt2>n/3) res.push_back(ele2);
    if(res.size()==2&&res[0]>res[1]){
        swap(res[0],res[1]);
        return res;
    }

}

int main() {
  
    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> res = findMajority(arr);
    for (int ele : res) {
        cout << ele << " ";
    }
    return 0;
}