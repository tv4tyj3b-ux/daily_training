#include <stdio.h>
//数据结构，指针应用
void swap(int *a,int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
	printf("a=%d,b=%d\n",*a,*b);
}
 
struct point{
	int x;
	int y;
};

int main(int argc,char const *argv) {
	//一个函数，用指针，传入两个int参数，交换这两个参数的值
	//这个是传指针的，还有传引用更简洁 
	int a,b;
	printf("分别输入a、b\n");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	
	//数组和指针结合使用
	int arr[] = {12,34,56,78,90};
	int *p = arr;
	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++) {
		printf("%d\n",*(p+i));
		printf("%p\n",(p+i));
	} 
	
	//结构体练习
	/*struct 结构体名{
	类型 变量名；
	类型 变量名；
	。。。
	}；*/
	struct point pp;
	pp.x = 10;
	pp.y = 9;
	printf("x=%d,y=%d\n",pp.x,pp.y); 
	return 0;
} 
