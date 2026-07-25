#include <stdio.h>
#include <math.h>
int search(int key,int a[],int length)
{
	int ret = -1;
	int i;
	for (i=0;i<length;i++){
		if (a[i] == key) {
			ret = i;
			break;
		}
	}
}

int main(void) {
	//数组的集成初始化
	int a[] =  {1,2,5,4,3,6,9,8,7,23,12,50,13,};
	//遍历数组 
		int i;
		int j = sizeof(a)/sizeof(a[0]);
		printf("%d\n",j);
		for (i=0;i<j;i++) {
			printf("%d\t",a[i]);
		}
		printf("\n");
	
	int x;
	int loc;
	printf("请输入一个数字：\n");
	scanf("%d",&x);
	loc = search(x, a, j);
	if (loc != -1) {
		printf("%d在第%d个位置上\n",x,loc+1);
	} else {
		printf("%d不存在\n",x);
	}
	return 0;
} 
