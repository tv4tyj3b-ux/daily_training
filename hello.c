#include <stdio.h>

int main()
{
	printf("Hello World! ");
	
	printf("\n12+34=%d",12+34);
	
	int input = 0;
	printf("\n输入数字：");
	scanf("%d", &input);
	printf("\n您输入的数字是：%d",input);
	
	float weight = 0;
	printf("\n请输入体重（kg）：");
	scanf("%f", &weight);
	float height = 0;
	printf("\n请输入身高（m）：");
	scanf("%f", &height);
	float BMI = weight/(height*height);
	printf("\n您的BMI是：%f",BMI);
	
	return 0;
}
