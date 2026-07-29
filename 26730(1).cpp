#include <stdio.h>
//三角形检测 
void swap(int &i,int &j,int &k) {
	printf("输入得%d %d %d\n",i,j,k);
	int t;
	if (i>j) {
		t = i;
		i = j;
		j = t;
	}
	if (i>k) {
		t = i;
		i = k;
		k = t;
	}
	if (j>k) {
		t = j;
		j = k;
		k = t;
	}

	printf("从小到大排序是：%d %d %d\n",i,j,k);
}

int main(void) {
	//取得三边输入 
	int a,b,c;
	printf("输入你想输入的三边长度：\n");
	scanf("%d %d %d",&a,&b,&c);
	//判断是否等边，从小到大排序
	if (a == b&&b == c&&a == c) {
		printf("等边三角形\n");
	}
	else {
	swap (a,b,c);
	if (a+b<c){
		printf("无法组成三角形\n");
	}else{
		printf("普通三角形\n");
	}
	}

	return 0;
}
