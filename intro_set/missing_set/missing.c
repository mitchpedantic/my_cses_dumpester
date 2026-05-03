#include <stdio.h>
unsigned long long idx, nu, max;

int main(){
    scanf("%llu", &nu);
    for ((max=nu*(nu+1)/2, idx = nu - 1); idx > 0; (idx--, max-=nu))
        scanf("%llu", &nu);
    printf("%llu", max);
}