#include <vector>
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

vector<int> v = {1,2,3};

int main()
{
    stack<int> st;queue<int> q;

    v.push_back(4); v.size(); v[0];

    st.push(5); st.top(); st.pop();

    q.push(5); q.front(); q.pop();

    priority_queue<int> maxH; // max
    priority_queue<int,vector<int>, greater<int>> minH; // min

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    for(auto e : st)
        cout << e << " ";

    for(auto e : q)
        cout << e << " ";

    return 0;
}