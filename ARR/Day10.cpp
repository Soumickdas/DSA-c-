#include <bits/stdc++.h>
using namespace std;
// void fun(int i,int n)  {
//     if(i<1)  {
//         return;
//     }
//     cout << i << endl;
//     fun(i-1,n);


// Backtracing
void fun(int i,int n)  {
    if(i>n)  {
        return;
    }
    fun(i+1,n);
    cout << i << endl;;
}
int main ()   {
    int n;
    cout <<  "Enter an number: ";
    cin >> n;
    fun(1,n);
}