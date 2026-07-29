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

int main(int argc ,char const *argv) {
	//int putchar(int c)Êä³öchar;
	//int getchar(void)ÊäÈëchar;
	char line[] = "hello";
	printf("strlen=%lu\n",mylen(line));
	
	int ch;
	while((ch=getchar()) != EOF) {
		putchar(ch);
	}
	
	return 0;
}
