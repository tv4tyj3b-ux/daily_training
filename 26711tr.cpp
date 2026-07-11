#include <stdio.h>

int main() {
	//先求一下1%10等于多少
	int fuck =1;
	fuck %=10;
	printf("%d\n",fuck);
	
	//前n项分数求和
	int n;
	int i;
	double sum = 0.0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		sum+=1.0/i;
	} 
	printf("f(%d)=%f\n",n,sum);
	
	//变体，1-1/2+1/3-1/4。。。+1/n ,趋于收敛的算式 
	int n1;
	int i1;
	double sum1 = 0.0;
	//设置+-轮换改变的变量sign1 
	int sign1 = 1;
	scanf("%d",&n1);
	for (i1=1;i1<=n1;i1++){
		//乘数除数里面只要有其中一个是浮点数，计算自动转为浮点数 
		sum1+=sign1*1.0/i;
		sign1 = -sign1;
	} 
	printf("f(%d)=%f\n",n1,sum1);
	
	//正序分解整数，输入一个非负整数，正序输出他的每一位数字
	//eg输入12345，输出1  2  3  4  5
	int big;
	int small;
	scanf("%d",&big);
	//先做整数求逆
	int anti=0;
	int count =0;
	//判定大数末尾是否有0，如果有就保存到计数 
	int big2=big;
	while (big2%10 == 0){
		big2 /=10;
		count++;
	}
	do {
		printf("big=%d\n",big);
		anti *=10;
		small = big%10;
		printf("small=%d\n",small);
		big /=10;
		anti +=small;
		printf("anti=%d\n",anti);
	} while (big>0);
	big = anti;
	printf("倒序之后的数字为%d\n",big);
	//后做正序输出单独数字 
	while ( big>0 ){
		//如果大数后面是0，就根据count计数补0 
		if (count>0){
			printf("0\n");
			count--;
		}
		else{
		small = big%10;
		printf("%d\n",small);
		big /=10;
	} 
		}
    
    //求最大公约数
    //辗转相除法
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	} 
	printf("gcd=%d\n",a);
	
	return 0;
}
