#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> v = {
        10, 20, 30, 20, 40,
        10, 50, 20, 30
    };

    map<int, int> freq;

    for (int x : v)
        freq[x]++;

    cout << "Repeated elements:\n";

    for (auto x : freq) {

        if (x.second > 1) {
            cout << x.first
                 << " appears "
                 << x.second
                 << " times\n";
        }
    }

    return 0;
}
