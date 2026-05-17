#include <stdio.h>

#define MDB (1000000000 + 7)
#define M63 ((1ULL<<63)%MDB)

int main() {
    int in = 0;
    long out = 0;
    scanf("%d", &in);
    (in < 64)\
        ? (out = ((1ULL<<in)%MDB)) \
        : (out = M63);
    for (int i = 0; i < (in-63); i++)
        out = (2*out)%MDB;
    printf("%ld\n", out);
}