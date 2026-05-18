#include <iostream>

using namespace std;

bool ciur[100001];

void eratostene(int n) {
    fill(ciur, ciur+n+1, true);
    ciur[0] = ciur[1] = false;
    for (int i = 2; i*i <= n; i++)
        if (ciur[i])
            for (int j = i*i; j <= n; j += i)
                ciur[j] = false;
}
int main()
{
    int n;
    cin >> n;
    eratostene(n);
    return 0;
}