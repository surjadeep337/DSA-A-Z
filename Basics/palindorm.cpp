#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long rev = 0;
        int original = x;

        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }

        return original == rev;
    }
};

int main() {
    Solution obj;
    int x;
    cin >> x;

    if(obj.isPalindrome(x))
        cout << "true";
    else
        cout << "false";

    return 0;
}