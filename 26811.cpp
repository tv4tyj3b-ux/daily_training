#include <stdio.h>

int main(int argc,char const *argv[]) {
    char ch;
    int i,j;
    ch = getchar();//getchar某种程度上类似于scanf
    if (ch >= 'A' && ch <= 'Z') {//限定输入条件
        for (i=0;i<=ch-'A';i++) {
            for(j=0;j<i;j++) {//这里是打印下划线的循环
                putchar('_');
            }
            for(j=0;j<=i;j++) {//这里是打印字母的循环，putchar可以连续输出
                putchar(ch - j);
            }
            putchar('\n');
        }
    }else {
        printf("input invalid\n");
    }
    return 0;
}