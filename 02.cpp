#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
//这版有误，无法将输入的暴击伤害倍率转化到函数中
//做一个伤害函数，输入基础攻击力、暴击率、暴击伤害
//按照基础攻击力*暴击率*暴击伤害倍率来乘
void func_atk (int atk,int bizrat,int bizdmg)
{
	double damage;
	srand(time(0));
	int bizif = rand()%101;
	printf("当前攻击力是%d\n",atk);
	printf("当前暴击率是%d\n",bizrat);
	printf("当前暴击伤害倍率是%d\n",bizdmg);
	if (bizif>bizrat) {
		damage = atk*(1.0+bizdmg/100);
		printf("暴击了！伤害是%d\n",damage);
		}else{
			damage = atk;
			printf("很遗憾没暴击，伤害是%d\n",damage);
			}
	
	}

int main () {
	int atk_i=0;
	int bizrat_i=0;
	double bizdmg_i=0;
	printf("请输入基础攻击力、暴击率和暴击伤害\n");
	scanf("%d %d",&atk_i,&bizrat_i);
	scanf("%f",&bizdmg_i);
	func_atk(atk_i,bizrat_i,bizdmg_i);
	return 0;
	}