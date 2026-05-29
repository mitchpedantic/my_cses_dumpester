#include <stdio.h>
long i;
int z = 0;

int main() {
    scanf("%ld", &i);
    for (int k = i/5; k > 0; z += k, k/=5) {}
    printf("%d", z);
}
