#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";

    // dp[i][j] = true if s[i..j] is a palindrome
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    
    int start = 0;
    int maxLength = 1;

    // All substrings of length 1 are palindromes
    for (int i = 0; i < n; ++i)
        dp[i][i] = true;

    // Check for substring of length 2
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check for lengths greater than 2
    for (int len = 3; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1;

            // Check if the current substring is palindrome
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                if (len > maxLength) {
                    start = i;
                    maxLength = len;
                }
            }
        }
    }

    return s.substr(start, maxLength);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = longestPalindrome(s);
    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}
