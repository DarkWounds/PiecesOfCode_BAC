#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

int v[] = {5, 2, 9, 1, 5, 6};

int main()
{
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    int s = accumulate(v.begin(), v.end(), 0);

    // Elimina duplicate (vector sortat):
    v.erase(unique(v.begin(),v.end()),v.end());

    // Umple cu valoare:
    fill(v.begin(), v.end(), 0);

    cout << "Max: " << mx << ", Min: " << mn << ", Suma: " << s;

    return 0;
}