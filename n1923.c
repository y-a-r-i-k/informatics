#include <stdio.h>

int main() {
    long long w, h, n;
    scanf("%lld %lld %lld", &w, &h, &n);

    long long l, r;
    l = 0;
    r = (w>h?w:h) * n;

    while(l < r) {
        long long m = (l + r) / 2;
        long long dip = (m / w) * (m / h);
        if (dip < n) {
            l = m + 1;
        } else {
            r = m;
        }
    }

    printf("%lld\n", r);
}
