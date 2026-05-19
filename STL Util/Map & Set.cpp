#include <map>
#include <set>
#include <unordered_map>
#include <iostream>

using namespace std;

int main()
{
    map<string,int> freq;

    freq["ana"]++;
    freq.count("ana"); // 1 daca exista

    set<int> s;
    s.insert(3); s.count(3); s.erase(3);

    // Frecventa elementelor:
    unordered_map<int,int> cnt;
    for (int x : v) cnt[x]++;

    return 0;
}
