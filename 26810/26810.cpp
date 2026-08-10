#include <stdio.h>
#include "func.h"
//打印a到b间的奇数，并打印奇数的个数

int main () {
    int min,max;
    printf("输入两个数字求他们之间的奇数及其个数\n");
    scanf("%d %d",&min,&max);
    int cnt = 0;
    jishu(min,max,cnt);
    return 0;
}