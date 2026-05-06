#include <stdio.h>
unsigned long int mx, mn, x, y, t, a, b;


int main() {
    for (scanf("%lu", &t); t > 0; t--) {
        scanf("%lu %lu", &x, &y);
        a = (!(x/y == 0)); b = (!(y/x == 0));
        mx = a*x + (!(a*x != 0))*b*y;
        mn = (!(x/y != 0))*x + (!(y/x != 0))*y;
        printf("%lu\n", 1 + (mx * (mx - 1)) - (a*(mx%2)*(mx - mn) - b*(mx%2)*(mx - mn)) + (a*!(mx%2 != 0)*(mx - mn) - b*!(mx%2 != 0)*(mx - mn)));
    }
}