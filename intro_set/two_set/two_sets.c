#include <stdio.h>

int main() {
    int sz = 0;
    scanf("%d", &sz);

    int tmp = sz - (sz%2 ? 3 : 4);
    if ((tmp % 4) == 0) {
        tmp = sz/2;
        printf("YES\n%d\n%d", tmp, sz);
        for (int pri = sz, i = 0; i < (tmp - 1); i++) {
            pri -= (i%2 ? 1 : 3);
            (printf(" %d", pri));
        }
        tmp = sz - tmp;
        printf("\n%d\n%d", tmp, sz - 1);
        for (int pri = sz - 1, i = 0; i < (tmp - 1); i++) {
            pri -= (i%2 ? 3 : 1);
            (printf(" %d", pri));
        }
    }
    else
        printf("NO");
}