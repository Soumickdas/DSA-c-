#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Finding the second largest 
// Problem 1
int secondlarhest(vector<int> &arr) {
    int n = arr.size();
    int largest=-1 , secondlargest=-1;
    // now we will check for the largest ele in the array
    for(int i=0;i<n;i++)  {
        if(arr[i]>largest)  {
            largest=arr[i];
        }
    }
    // findin the second largest
    for(int i=0;i<n;i++)  {
        if(arr[i]>secondlargest && arr[i]!=largest) {
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}



int main ()  {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << secondlarhest(arr);
}