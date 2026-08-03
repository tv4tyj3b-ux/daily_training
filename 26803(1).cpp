#include <stdio.h>
//参加百米决赛，八秒内进入决赛，否则提示淘汰
//根据性别提示进入男子组或者女子组，进行判断
void judge_result (int &result){
	printf("请输入您的成绩：\n");
	scanf("%d",&result);
	if (result<8) {
		printf("恭喜进入决赛\n");
	}else {
		printf("很遗憾你被淘汰了\n");
	}
} 

void judge_gendle (int &gendle) {
	printf("请输入您的性别，1为男，2为女\n");
	scanf("%d",&gendle);
	if (gendle == 1) {
		printf("您进入男子组\n");
	}if (gendle == 2) {
		printf("您进入女子组\n");
	}
}

int main() {
	int result,gendle;
	judge_gendle(gendle);
	judge_result(result);
	//根据淡旺季的月份和参加者的年龄打印票价
	int season,year;
	int price;
	printf("请输入月份和年龄：\n");
	scanf("%d %d",&season,&year);
	//旺季 
	if (4<=season && season<=10) {
		if (year<18) {
			price = 30;
		}else if (18<=year && year<60) {
			price = 60;
		}else {
			price = 20;
		}
	}
	//淡季 
	else{
		if(18<=year && year<60) {
		    price = 40;
		}else {
			price = 20;
		}
	}
	printf("您的票面是%d\n",price);
	return 0;
}

