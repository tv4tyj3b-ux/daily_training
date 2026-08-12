#include <stdio.h>
#include <stdlib.h>
//给数组里面的数字辨别大小的一个函数
void minmax (int arr[],int len,int &min,int &max) {
    int i;
    min = arr[0];
    max = arr[0];
    for (i = 1;i<=len;i++) {
        if (min > arr[i] && arr[i] != -1 && arr[i] != 0) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }printf("%d %d",min,max);
}

//写一个可以往里面加数字的数组
int main() {
    int arr[100] = {0};
    int an = 0;
    for(an = 0;an <= sizeof arr/sizeof arr[0];an++) {
        scanf("%d",&arr[an]);
        if(arr[an]==-1) {
            break;
        }
    }
    for(int n=0;n <= sizeof arr/sizeof arr[0];n++) {
        if(arr[n] != 0) {
        printf("%d ",arr[n]);
        }
    }
    printf("\n");
    int min,max;
    minmax(arr, sizeof (arr)/sizeof (arr[0]),min,max);     
}