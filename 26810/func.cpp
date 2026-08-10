#include <stdio.h>
void jishu (int min,int max,int cnt) {
    for (int n = min;n <= max;n++) {
        if (n%2 == 0) {
            ;
        }else {
            cnt++;
            printf("%d\n",n);
        }
    }printf("%d到%d之间的奇数有%d个\n",min,max,cnt);
}
