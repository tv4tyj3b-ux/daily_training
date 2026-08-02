#include <stdio.h>
#include<math.h>
int main(){
	
	//3
	int i4,j4,k4;
	i4=5;
	j4=10;
	k4=1;
	printf("%d\n",k4>i4<j4);
	
	//4
	int i2,j2,k2;
	i2=2;
	j2=3;
	k2=i2*j2==6;
	printf("%d\n",k2);
	
	//5
	int i3,j3,k3;
	i3=3;
	j3=2;
	k3=1;
	printf("%d\n",i3<j3==j3<k3);
	
	//傻篮子计算器 
	//初始化
	int bill,price;
	//读入金额和票面
	printf("请输入金额：\n");
	scanf("%d",&price);
	printf("请输入票面：\n");
	scanf("%d",&bill);
	//判断大小并计算找零
	if (bill>=price) {
		printf("应该找您%d元\n",bill-price);
	} 
	else {
		printf("钱不够啊。\n");
	}
	
	//两个数比大小
	int a,b,bigger;
	printf("请输入两个整数：\n");
	scanf("%d %d",&a,&b);
	if (a>b) {
		bigger = a;
		printf("大的那个是%d\n。",bigger);
	} 
	else if (a=b) {
		printf ("这两个数大小相等。"); 
	} 
	else {
		bigger = b;
		printf("大的那个是%d\n。",bigger);
	}
	

	
	return 0;
}
