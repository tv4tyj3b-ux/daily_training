#include <stdio.h>
#include <math.h>
int main () {
	//ABC比大小
	int a,b,c;
	printf("请分别输入三个数字：\n");
	scanf("%d %d %d",&a,&b,&c);
	int biggest;
	if (a>b) {
		if(a>c){
			biggest = a;
		}else{
			biggest = c;
		}
	} 
	else{
		if(b>c){
			biggest = b;
		}else{
			biggest = c;
		}
	}
	printf("最大的数字是：%d\n",biggest);
	
	//switch-case语句
	int num_hor,type;
	printf("输入你拥有的匹数：\n");
	scanf("%d",&num_hor);
	if (num_hor<=10000) {
		type = 1;
	}
	else if (10000<num_hor<=100000) {
		type = 2; 
	}
	else if (100000<num_hor<=500000) {
		type = 3;
	}
	else {
		type = 4;
	}
	switch ( type ) {
		case 1:
			printf("呜呼是电流推动高手！\n");
			break;
	    case 2:
	    	printf("呱啊好强的力量！\n");
	    	break;
	    case 3:
	    	printf("是磁场高手！快撤退！\n");
	        break;
	    default:
	    	printf("好婆妈啊！\n");
	    	break;	
	}
	return 0;
}
