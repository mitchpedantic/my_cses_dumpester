#include <stdio.h>

int main() {
    int a, b, d, n;
    scanf("%d", &n);
    while (n-->0) {
        scanf("%d %d", &a, &b);
        printf("%s\n", (a == b && b%3 == 0) || (a > b ?
            (d = a - b, (d > 0) && (b >= d) && ((a - 2*d) == (b - d)) && ((b - d)%3 == 0)) :
            (d = b - a, (d > 0) && (a >= d) && ((b - 2*d) == (a - d)) && ((a - d)%3 == 0)))
            ? "YES" : "NO");
    }
}