#include <stdio.h>

int main(){
	//固定数字内能被固定数字整除的最大数
	int x1,y1;//除数和被除数 
	int count = 0;
	scanf("%d %d",&x1,&y1);
    while (x1*count<y1){
    	count++;
	}
	int count1;
	count1 = count-1;
	printf("%d\n",x1*count1);
	
	//变体
	int x2,y2;//除数和被除数 
	scanf("%d %d",&x2,&y2);
    for(; y2%x2 != 0;y2--){
    	;
	}
	printf("%d\n",y2);
	
	
	//参考100内能被17整除的最大的数
	int i = 0;
	int num = 17;
	for(i = 100;0!=i%num;i--){
		;
	} 
	printf("%d\n",i);
	
	//已知abc都是一位整数，求当三位整数abc、cba的和为1333时，abc各为多少
	int a,b,c;
	int abc,cba;
	for (a=1;a<=9;a++){
		for (b=1;b<=9;b++){
			for (c=1;c<=9;c++){
				if (a*100+b*10+c+c*100+b*10+a == 1333){
				printf("a=%d,b=%d,c=%d\n",a,b,c);
			    }
		    }
	    } 
    }
	return 0;
}
