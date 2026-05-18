#include <iostream>
#include <vector>

using namespace std;

// Rezolvarea problemei Turnurile din Hanoi folosind recursivitate. Complexitate O(2^n).
void hanoi(int n, char sursa, char dest, char aux) {
    if (n == 1) {
        cout << sursa << " -> " << dest << "\n";
        return;
    }
    hanoi(n-1, sursa, aux, dest);
    cout << sursa << " -> " << dest << "\n";
    hanoi(n-1, aux, dest, sursa);
}

int main()
{
    int n;
    cin >> n;
    hanoi(n, 'A', 'C', 'B'); // A: sursa, C: destinatie, B: auxiliar
    return 0;
}