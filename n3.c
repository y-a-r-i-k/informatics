#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int c = 0, m = 1;
    while(m < n) {
        m = m * 2;
        ++c;
    }
    printf("%d", c);
}