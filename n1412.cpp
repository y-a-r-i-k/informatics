#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        bool contain = false;
        for (int j = 0; j < n; ++j) {
            if (matrix[j][i] == x) {
                contain = true;
            }
        }   
        if (contain) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}