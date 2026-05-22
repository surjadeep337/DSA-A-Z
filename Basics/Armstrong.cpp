#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;

    // Count digits
    int digits = to_string(n).length();

    while (n > 0) {
        int lastDigit = n % 10;
        sum += pow(lastDigit, digits);
        n = n / 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n)) {
        cout << "Armstrong Number";
    } else {
        cout << "Not an Armstrong Number";
    }

    return 0;
}