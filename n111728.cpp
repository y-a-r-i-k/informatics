/*
//This solution works only for 6 tests even using the lower_bound and upper_bound built-in functions;
*/


#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

pair<int, int> lower_search(vector<int> v, int target);
pair<int, int> upper_search(vector<int> v, int target);

int main () {
    long long n, m;
    cin >> n >> m;

    vector<long long> v(n);

    for (long long i = 0; i < n; ++i) {
        cin >> v[i];
    } 

    for (int i = 0; i < m; ++i) {
        long long target;
        cin >> target;

        auto l = lower_bound(v.begin(), v.end(), target);
        long ld = distance(v.begin(), l);

        auto r = upper_bound(v.begin(), v.end(), target);
        long rd = distance(v.begin(), r);

        if (l == v.end() && r == v.end()) {
            cout << 0 << "\n";
            return 0;
        }

        cout << ld + 1 << " " << rd << "\n";

/*
        pair<int, int> left = lower_search(v, target);
        pair<int, int> right = upper_search(v, target);

        if (left.first == 0 && right.first == 0 && left.second == 0 && right.second == 0) {
            cout << 0 << "\n";
            continue;
        }


        if (left.second == right.first) {
            cout << left.second + 1 <<  " " << left.second + 1 << "\n"; 
        } else {
            cout << left.second + 1 <<  " " << right.first + 1 << "\n";
        }
*/
    }
}

pair<int, int> lower_search(vector<int> v, int target) {
    int l = -1, r = v.size() - 1;
    while (r - l > 1) {
        int mid = (l + r) / 2;

        if (v[mid] < target) {
            l = mid;
        } else {
            r = mid;
        }
    }

    if (v[l] == target || v[r] == target) {
        return {l, r};
    } else {
        return {0, 0};
    }
}

pair<int, int> upper_search(vector<int> v, int target) {
    int l = -1, r = v.size() - 1;
    while (r - l > 1) {
        int mid = (l + r) / 2;

        if (v[mid] <= target) {
            l = mid;
        } else {
            r = mid;
        }
    }
    if (v[l] == target || v[r] == target) {
        return {l, r};
    } else {
        return {0, 0};
    }
}
