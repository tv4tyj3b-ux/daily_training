#include <stdio.h>
#include <math.h>
int isprime (int x) {
	int i;
	int judge = 1;
	if (x==1){
	printf("%d是素数",x);
	}
	for (i=2;i<x;i++) {
		if (x%i == 0) {
			judge = 0;
			break; 
		}
	}
	return judge;
}

int main(void) {
	int x;
	scanf("%d",&x);
    if (isprime(x) ){
    	printf("%d是素数\n",x);
	}else{
		printf("%d不是素数\n",x);
	}
	//输出前十位素数，以数组形式
	const int number = 10;
	int prime[number];
	int count = 0;
	int i=2;
	while(count<number) {
		if(isprime(i)){
			prime[count++]=i;
		}
		i++;
	}
	for(i=0;i<number;i++){
		printf("%d\t",prime[i]);
	}
	
	//关于多维数组
	//形似 int a [x] [y]就是x行y列的二维数组，几个方括号就是几维 
	//几维数组就要加几重的循环嵌套来做遍历 
	
	return 0;
}
