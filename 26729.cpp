#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int mylen(const char*s) {
	int cnt = 0;
	int ind = 0;
	while (s[ind != '\0']) {
		ind++;
		cnt++;
	}
	return cnt;
}

//strcpy的实现方式 
//将src拷贝到dst ,由后到前 
//数组版本 
char *mycpy (char* dst,const char* src){
	int idx = 0;
	while (src[idx] != '\0') {
	dst[idx] = src [idx];
	idx++;
	}
	dst[idx] = '\0';
	return dst;	
} 

char *mycpy2 (char* dst,const char* src){
	int idx = 0;
	while (src[idx] != '/0') {
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return dst;
} 

int main(int argc ,char const *argv) {
	//int putchar(int c)输出char;
	//int getchar(void)输入char;
	int ch;
	while((ch=getchar()) != EOF) {
		putchar(ch);
	}
	//strcpy是复制字符串到某个位置
//	char s1[] = "abc";
//	char s2{} = "bbc";
//	strcpy(s1,s2);//这里是将s2内容拷贝到s1 
//	char line[] = "hello";
//	printf("strlen=%lu\n",mylen(line));
//	

	return 0;
}
