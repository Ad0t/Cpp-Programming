#include<bits/stdc++.h>
using namespace std;

void explainQueue () {
    // FIFO
    queue<int> q;
    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}

    q.back() += 5;      // {1, 2, 9}
    cout << q.back();   // 9

    cout << q.front();  // 1

    q.pop();    // {2, 9}

    cout << q.front();      // 2
}

int main () {
    explainQueue();
    return 0;
}