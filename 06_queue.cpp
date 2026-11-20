#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    q.push(10); q.push(20); q.push(30);
    cout << "Front: " << q.front() << '\n';
    q.pop();
    cout << "After pop: " << q.front() << '\n';
    return 0;
}
