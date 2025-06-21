#include<iostream>
#include<vector>
using namespace std;
// Problem buy and sell stock Brute force
// int maxprofit(vector<int> &price)  {
//     int n=price.size();
//     int res=0;
//     for(int i=0;i<n-1;i++)  {
//         for(int j=i+1;j<n;j++) {
//             res=max(res,price[i]-price[j]);
//         }
//     }
//     return res;
// }
// Better approach
// int maxprofit(vector<int> & price) {
//     int minSofar=price[0];
//     int res=0;
//     int n=price.size();
//     for(int i=1;i<n;i++) {
//         minSofar=min(minSofar,price[i]);
//         res=max(res,price[i]-minSofar);
//     }
//     return res;
// }
// Problem 2 Minimum and maximum diffrence between height
// int getMinDiff(vector<int> &arr, int k) {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
  
//     // If we increase all heights by k or decrease all
//     // heights by k, the result will be arr[n - 1] - arr[0]
//     int res = arr[n - 1] - arr[0];

//     //  For all indices i, increment arr[0...i-1] by k and
//     // decrement arr[i...n-1] by k
//     for (int i = 1; i < arr.size(); i++) {
      
//         // Impossible to decrement height of ith tower by k, 
//         // continue to the next tower
//         if (arr[i] - k < 0){
//              continue;
//         }
//           int minH = min(arr[0] + k, arr[i] - k);
      
//         // Maximum height after modification
//         int maxH = max(arr[i - 1] + k, arr[n - 1] - k); 
//          res = min(res, maxH - minH);
//     }
//     return res;
// }

int main()  {
    vector<int> prices={7, 10, 1, 3, 6, 9, 2};
    // cout<< maxprofit(prices)<<" ";
    // int ans = getMinDiff(arr, k);
    // cout << ans;

}