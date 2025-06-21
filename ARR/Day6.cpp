#include<bits/stdc++.h>
using namespace std;
void fun (int arr[],int n)   {
    int temp=arr[0];
    for(int i=0;i<n-1;i++)  {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}
int main ()  {
    int arr[]={1,2,3,4,5,7};
    int n = 6;
    fun(arr,n);
}