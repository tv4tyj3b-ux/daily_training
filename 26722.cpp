#include <stdio.h>
#include <math.h>
void sum (int begin, int end)
{
	
		int i;
		int sum = 0;
		for (i=begin;i<=end;i++){
			sum += i;
		}
		printf("%d到%d的和是%d\n",begin,end,sum);
}
int max (int a,int b)
{
	int ret;
	if (a>b){
		ret = a;
	}
	if (b>a){
		ret = b;
	}
	return ret;
}
int main () {
//	//求素数的代码，复习，错误 
//	int i;
//	scanf("%d",&i);
//	int j = 0;
//	int cnt=0;
//	int is_prime = 0;
//	for (j=0;j<=i;j++) {
//		if(i%j==0){
//			is_prime=1;
//			break;
//		}else{
//			cnt++;
//		}
//	} 
//	printf("%d内的素数有%d个\n",i,cnt);

    //函数练习
	sum (1,10);
	sum (10,20);
	sum (20,30);
	int c;
	c=max(10,12);
	printf("max=%d",c);
	return 0;
}
