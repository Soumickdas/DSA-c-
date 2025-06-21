#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Define a hash array (size should be >= max number in arr to avoid out-of-bounds issues)
    int hash[100] = {0}; // Assuming numbers are <= 99; increase size if needed

    // Storing the frequency in the hash array
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter the queries: " << endl;
    while(q--) {
        int num;
        cin >> num;
        cout << "Frequency of " << num << " is: " << hash[num] << endl;
    }

    return 0;
}
