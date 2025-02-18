#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> st;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        st.insert(t);
    }

    auto it = st.end();
    --it; --it;

    cout << *it;
}