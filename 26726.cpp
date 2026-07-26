#include <stdio.h>
#include <math.h>

void f (int *p) {
	printf("%p\n",p);
}
	
void g (int *l) {
	*l = 26;
} 

int swap (int *pa,int *pb){
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

//判断是否为偶数 
int judge (int i){
	if (i%2==0) {
		printf ("这个数是偶数\n");
	}else {
		printf("这个数不是偶数\n");
	}
}

int main(void) {
	//指针
	//就是保存地址的变量
	// int* p = &i 
    int i = 6;
    int j = 8;
    printf("%d\n",i);
    printf("%p\n",&i);
    f(&i);
    i = 8;
    f(&i);
    g(&i);
    printf("i=%d\n",i);
    swap(&i,&j);
    printf("i=%d,j=%d\n",i,j);
	int x;
	scanf("%d",&x);
	judge(x);
	return 0;
}
