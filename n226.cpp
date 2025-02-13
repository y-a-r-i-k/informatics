#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int l;
    cin >> l;

    vector<int> v(l);
    for (int i = 0; i < l; ++i) {
        cin >> v[i];
    }

    int t;
    cin >> t;

    for (int i = 0; i < l; ++i) {
        if (v[i] == t) {
            cout << i + 1 << " ";
        }
    }
}