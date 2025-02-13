#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int l;
    cin >> l;

    vector<int> v(l);
    for (int i = 0; i < l; ++i) {
        cin >> v[i];
    }

    int target;
    cin >> target;

   cout << count(v.begin(), v.end(), target);

}