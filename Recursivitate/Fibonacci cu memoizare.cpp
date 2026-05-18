#include <iostream>
#include <vector>

using namespace std;

int memo[1001];

// Fibonacci cu memorizare (top-down). Complexitate O(n).
int fib(int n) {
    if (n <= 1) return n;
    if (memo[n]) return memo[n];
    return memo[n] = fib(n-1) + fib(n-2);
}

// Iterativ (cel mai rapid):
int fibIter(int n) {
    if (n<=1) return n;
    int a=0, b=1;
    for(int i=2;i<=n;i++){int c=a+b;a=b;b=c;}
    return b;
}

int main()
{
    int n;
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}