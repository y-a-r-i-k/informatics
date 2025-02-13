#include <iostream>
#include <limits>

using namespace std;

int main() {
    int max = INT16_MIN, index = -1, n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int e;
        cin >> e;
        if (e > max) {
            max = e;
            index = i;
        }
    }
    cout << index + 1;
}