#include <stdio.h>
#include <time.h>
#include <math.h>

//函数内参数的作用域和生存期仅存在于函数的大括号内 
void swap (int a,int b){
	int t;
	int swap;
	int c = a;
	a = b;
	b = t;
}
//其实main也是个函数 
//数组 
//求输入数字的平均数（前半），并把大于平均数的数打印出来（后半） 
int main () {
	int x;
	double sum = 0;
	int cnt = 0;
	//设定一个数组，有100个位置 
	int number[100];
	scanf("%d",&x);
	while (x != -1) {
		//数组的cnt位上是输入的x 
		number[cnt] = x;
		// 
		{
			int i;
			printf("%d\t",cnt);
			for (i=0;i<=cnt;i++) {
				printf("%d\t",number[i]);
				printf("\n");
			} 
		}
		//
		sum += x;
		cnt++;
		scanf("%d",&x);
	}
	if (cnt>0) {
		printf("%f\n",sum/cnt);
		int i;
		//有确定数量的情况下用for 
		for (i=0;i<cnt;i++){
			if (number[i]>sum/cnt) {
				printf("%d\n",number[i]);
			}
		}
	}
	
	//写个程序，输入数量不确定的【0-9】范围内的整数
	//统计每一种数字出现的次数，输入-1表示结束
	const int num =10;
	int y;
	int count[num];
	int j;
	for (j=0;j<num;j++) {
		count [j] = 0;//遍历数组使其计数初始化 
	}
	scanf("%d",&y);
	while (x!=-1) {
		if (x>=0 && x<=9) {
			count[y]++;
		}
		scanf("%d",&y);
	}
	for (j=0;j<num;j++) {
		printf("%d:%d\n",j,count[j]);
	}
	
    //return是给系统看的，不管是谁总会有人看 
	return 0;
}
