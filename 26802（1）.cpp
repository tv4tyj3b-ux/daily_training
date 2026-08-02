#include <stdio.h>
//定义struct  
struct date {
	int month;
	int day;
	int year;
};

int main(void) 
{
//  这个是翁恺老师教的初始化方式，在这里不适用 
//	struct date today;
//	today.month = 8;
//	today.day = 02;
//	today.year = 2026;
	struct date today = {
		8,2,2026
	};
	
	struct date day;
	day = today;
	struct date *ptrdate = &today;
	printf("today is %i-%i-%i.\n",today.year,today.month,today.day);
	printf("today is %i-%i-%i.\n",day.year,day.month,day.day);
	day.year = 2036;
	printf("today is %i-%i-%i.\n",day.year,day.month,day.day);
	printf("address of today is %p\n",ptrdate);
	
	//结构也可以做数组
	struct date dates[] = {
		{8,4,2026},{8,5,2026},{8,6,2026}, 
	}; 
	for(int i=0;i<(sizeof dates/sizeof dates[0]);i++) {
		printf("%i-%i-%i\n",dates[i].year ,dates[i].month ,dates[i].day );
	}
	return 0;
} 
