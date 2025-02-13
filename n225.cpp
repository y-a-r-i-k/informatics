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

    vector<int> diff(l, 0);
    for (int i = 0; i < l; ++i) {
        diff[i] = abs(t - v[i]);
    }

    auto min_el = min_element(diff.begin(), diff.end());
    int index = distance(diff.begin(), min_el);

    cout << v[index];
}