#include <stdio.h>

int main() {
	
	//给定不超过6的正整数 ，考虑这个数字开始连续的四个数字，输出它们组成的无重复数字三位数
	int a;
	scanf("%d",&a);
	int i,j,k;
	i = a;
	int count = 0;
	while (i<=a+3) {
		j = a;
		while (j<=a+3) {
			k = a;
			while (k<=a+3){
				if (i !=j) {
					if (i!=k){
						if (j!=k) {
							count++;
							printf("%d%d%d",i,j,k);
							if (count%6==0) {
								printf("\n");
							}else{
								printf(" ");
							}
						}
					}
				}
				k++;
			}
			j++;
		}
		i++;
	} 
	printf("\n");
	
	//for循环版本的上题
	int a1;
	scanf("%d",&a1);
	int i1,j1,k1; 
	int count1 = 0;
	for (i1=a1;i1<=a1+3;i1++){
		for(j1=a1;j1<=a1+3;j1++){
			for(k1=a1;k1<=a1+3;k1++){
				if (i1!=j1 && j1!=k1 && k1!=i1){
					count1++;
					printf("%d%d%d",i1,j1,k1);
					if(count1%6==0){
						printf("\n");
					}else{
						printf(" ");
					}
				}
			}
		}
	}
	
	//水仙花数,指一个n位正整数，每个位上数字的n次幂之和等于它本身，eg153=1^3+5^3+3^3
	//本题要求编写一个可以计算n位水仙花数的程序 
	 
	 printf("输入一个3-5的数，我帮你算水仙花数\n");
	 int n;
	 scanf("%d",&n);
	 int b=0,c=0,d=0,e=0,f=0,g=0,h=0,l=0;
	 switch (n) {
	 	case 3:
		for(b=0;b<10;b++) {
			for(c=0;c<10;c++) {
				for(d=0;d<10;d++) {
					int t = b*100+c*10+d;
					if (t==b*b*b+c*c*c+d*d*d) {
						printf("%d\n",t);
					}
				}
			}
		 }
		break;
		
		case 4:
		for(b=0;b<10;b++) {
			for(c=0;c<10;c++) {
				for(d=0;d<10;d++) {
					for(e=0;e<10;e++){
					int t = b*1000+c*100+d*10+e;
					if (t==b*b*b*b+c*c*c*c+d*d*d*d+e*e*e*e) {
						printf("%d\n",t);
					    }
					}
				}
			}
		 }
		break;
		
		case 5:
		for(b=0;b<10;b++) {
			for(c=0;c<10;c++) {
				for(d=0;d<10;d++) {
					for(e=0;e<10;e++){
						for(f=0;f<10;f++){
					    int t = b*10000+c*1000+d*100+e*10+f;
					    if (t==b*b*b*b*b+c*c*c*c*c+d*d*d*d*d+e*e*e*e*e+f*f*f*f*f) {
						    printf("%d\n",t);
					        }
						}
					}
				}
			}
		 }
	 }
	 
	 //遍历做法(待修改） 
	int n2;
	scanf("%d",&n1);
	int first2 = 1;
	int i2 = 1;
	while (i2<n2) {
		first2 *= 10;
		i2++;
	}
	printf("first=%d\n",first);
	//遍历
	i2 = first2;
	while (12<first2*10) {
		int t2 =i2;
		int sum =0;
		do{
			int d2 = t2%10;
			t2/=10;
			int p2 = 1;
			int j2 = 0;
			while (j2<n2) {
				p2 *= d2;
				j2++;
			}
		}while(t2>0);
	} 

	return 0;
}
