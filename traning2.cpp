#include <stdio.h>
#include <math.h>
#include <time.h>

int main (void) {
	//算如何用最少张钱填满预定数额 
	int x;
	printf("输入您要填多少钱：\n");
	scanf("%d",&x) ;
	int one=0,ten=0,fif=0,hund=0;
	one=x%10;
	for (ten=0 ;x/10>=ten;ten++) {
		for (fif=0;x/50>=fif;fif++) {
			for(hund=0;x/100>=hund;hund++) {
				if (hund*100+fif*50+ten*10+one==x) {
					printf("可以用%d张100，%d张50，%d张10和%d张1元得到%d元\n",hund,fif,ten,one,x);
					goto out;
				}
			}
		}
	}
	out:
		printf("程序结束\n");
	return 0;
}
