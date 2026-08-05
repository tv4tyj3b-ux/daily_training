#include <stdio.h>
#include <string.h>
//数据结构。函数
//某个具体功能的代码块
//增加复用性，降低编程难度
//对内隐藏细节，对外暴露接口 
int funplus(int &start,int &end) {
	int i;
	int sum=0;
	for (i=start;i<=end;i++) {
		sum += i;
	}
	printf("sum=%d\n",sum);
	return sum;
}

 
int main(int argc,char const *argv[]) {
	int start,end;
	printf("输入您要加的头尾两个数：\n");
	scanf("%d %d",&start,&end);
	funplus(start,end);
	
	char str2[11];
	strcpy(str2,"hello world");
	printf("%s\n",str2);
	int a = sizeof(int);
	printf("%d\n",a);
	
	
	//*返回的是指针变量指向的地址里面存的值 
	int b[] = {12,34,56,78,90};
	for (int j=0; j<5; j++) {
		printf("%d\n",b[j]);
		printf("%p\n",&b[j]);
	    int *pb = &b[j];
	    printf("%p %d\n",pb,*pb);
	}
	
	return 0;
}
