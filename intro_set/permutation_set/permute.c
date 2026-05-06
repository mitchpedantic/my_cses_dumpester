#include <stdio.h>
__uint32_t mx, tmp;

int main(){
    scanf("%u", &mx); tmp = mx/2;
    if (tmp == 1) {
        printf("NO SOLUTION"); return 0;
    }
    (mx%2)&&(printf("%d ", 1));
    while (tmp > 0) {
        printf("%d %d", (tmp)+(mx%2), mx + (tmp - mx/2)); (tmp--, tmp && (printf(" ")));
    }
}