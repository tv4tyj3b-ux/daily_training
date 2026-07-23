#include <stdio.h>
#include <math.h>

//hello world 和 简易BMI计算器
int main() {
	printf("hello world，这里是BMI计算器\n");
	float height,height2,weight,BMI;
	printf("请输入您的身高（㎝）:\n");
	scanf("%f",&height);
	printf("请输入您的体重（㎏）:\n");
	scanf("%f",&weight);
	height2 = height/100;
	BMI = weight/(height2*height2);
	printf("您的BMI是：%f",BMI);
	if (BMI<18.5) {
		printf("您当前BMI过轻，请增重\n");
		}else if (18.5<=BMI<23.9) {
			printf("您当前BMI正常，请保持\n");
			}else {
				printf("您当前BMI过重，请减重\n");
				}
    
    int input;
    int times =0;
    printf("请输入您要确定位数的数字:\n");
    scanf("%d",&input);
    while (input>0) {
    	printf("looping\n");
    	input /=10;
    	times++;
    	printf("当前结果是%d，当前次数是%d\n",input,times);
    	}
    	printf("结果位数为%d\n",times);
    
    
    
	return 0;
	}