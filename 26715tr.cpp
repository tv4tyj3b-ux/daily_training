#include <stdio.h>
int main() {
	//n项求和
	int n1;
	scanf("%d",&n1);
	double i1=1.0;//分母 
	double i2=2.0;//分子 
	double i3=0.0;//暂存变量 
	double j1=0.0;
	int  cnt1=0;
	while (cnt1<n1) {
		j1 += i2/i1;
		i3 = i1+i2;
		i1 = i2;
		i2 = i3;
		cnt1++;
	} 
	printf("%.2f\n",j1);
	
//	//约分最简分式
//	int x1,x2;
//	scanf("%d/%d",&x1,&x2);
//    //辗转相除法
//    int a1=x1;
//    int a2=x2;
//    int yu;
//    while (a2>0){
//    	yu = a1/a2;
//    	a1 = a2;
//    	a2 = yu;
//	}
//	printf("最大公约数为%d\n",yu);
//	printf("%d/%d\n", x1/a1 , x2/a1);
//	

    //正确做法
//	int devided,devisor;
//	scanf("%d/%d",&devided,&devisor);
//	int a = devided;
//	int b = devisor;
//	int t;
//	while (b>0) {
//		t = a%b;
//		a = b;
//		b = t;
//	}
//	printf("%d/%d\n",devided/a,devisor/b);
//	
	//求a的连续和
	int a,n;
	scanf("%d %d",&a,&n);
	int b = a;
	int sum = 0;
	while (n>0){
		sum += a; 
		int c = a*10;
		a = c+b;
		printf("a=%d\n",a);
    	n--;
	}	
	printf("sum=%d\n",sum);
	return 0;
}
