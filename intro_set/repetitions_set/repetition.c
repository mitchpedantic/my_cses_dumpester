#include <stdio.h>
signed ct[4U] = {0U};
char it = 0, lt = 0;
unsigned long long mx = 1U;

int main(){
    while ((lt = it), (it = getchar()) != '\n') {
        mx += ((ct[0x07&(it>>1)] = ((int)(lt==it) * ct[0x07&(it>>1)]) + 1) / (mx+1));
    }
    
    printf("%llu", mx);
}
