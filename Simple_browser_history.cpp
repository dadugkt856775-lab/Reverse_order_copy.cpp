#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<string> back;
    stack<string> forward;

    string current = "Google";

    // Visit pages
    back.push(current);
    current = "YouTube";

    back.push(current);
    current = "GitHub";

    back.push(current);
    current = "LeetCode";

    cout << "Current page: "
         << current << endl;

    // Back
    forward.push(current);
    current = back.top();
    back.pop();

    cout << "After Back: "
         << current << endl;

    // Back again
    forward.push(current);
    current = back.top();
    back.pop();

    cout << "After Back again: "
         << current << endl;

    // Forward
    back.push(current);
    current = forward.top();
    forward.pop();

    cout << "After Forward: "
         << current << endl;

    return 0;
}
