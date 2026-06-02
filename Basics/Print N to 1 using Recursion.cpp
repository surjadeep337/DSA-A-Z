#include <iostream>
using namespace std;

void printNto1(int n)
{
    if(n == 0)  // Base case
        return;

    cout << n << " ";
    printNto1(n - 1);  // Recursive call
}

int main()
{
    int n;
    cin >> n;

    printNto1(n);

    return 0;
}