#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i =0;
	char *s = "hello world";
//	s[0] = 'b';
	printf("s=%p\n",s);
	printf("s[0]=%c\n",s[0]);
	//定义好的字符串变量是只读的
	//写在内存里面地址较低的代码段
	//故s【0】没能被修改为b
	//实际上char *s是const的 
	char s3[] = "hello world";
	printf("the dingwei of s3=%p\n",s3);
	s3[0] = 'b';
	printf("s3[0]=%c\n",s3[0]);
	
	//字符串输入输出
	char word[8],word2[8];
	scanf("%7s",word);
	scanf("%7s",word2);
	printf("s=%s %s\n",word,word2);
	//printf%c只能得到char的第一个字母，%s才是当前char的完整字符串 
	char *month[] = {
	"jan",
	"feb",
	"mar",
	"apr",
	"may",
	"jun",
	"jul",
	"aug",
	"sep",
	"oct",
	"nov",
	"dec",
	};
	int num;
	scanf("%d",&num);
	printf("%s\n",month[num-1]);
	//动态分配空间，malloc
	//int *a = (int*)malloc(n*sizeof(int));
	int n;
	printf("输入你想要申请的mb：\n");
	scanf("%d",&n);
	int *b = (int*)malloc(1024*1024*n*sizeof(int));
	printf("当前申请到了%dmb内存\n",n);
	
	//每日练习
	//输入一个年份若是闰年输出2月29日，else2月28日
	printf("输入年份：\n");
	int year;
	scanf("%d",&year) ;
	if (year%4==0 || year%100==0) {
		printf("这年的2月有29日\n");
	}else{
		printf("这年的2月有28日\n");
	}
	return 0;
}
