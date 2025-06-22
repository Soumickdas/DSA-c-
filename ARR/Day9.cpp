#include <bits/stdc++.h>
using namespace std;
void fun(int i,int arr[],int n) {
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    fun(i+1,arr,n);
}
int main ()   {
    int num;
    cout << "Enter the numbers of ele in an array: ";
    cin >> num;
    int arr[num];
    cout << "Enter the ele of an array: ";
    for(int i=0;i<num;i++)   {
        cin >> arr[i];
    }
    fun(0,arr,num);
    cout << "Reversed array: \n";
    for (int i=0;i<num;i++)  {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}