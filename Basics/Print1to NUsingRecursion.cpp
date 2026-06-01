#include <bits/stdc++.h>
using namespace std;

void printNumbers(int i, int n)
{
    // Base Case
    if(i > n)
        return;

    cout << i << " ";

    // Recursive Call
    printNumbers(i + 1, n);
}

int main()
{
    int n;
    cin >> n;

    printNumbers(1, n);

    return 0;
}