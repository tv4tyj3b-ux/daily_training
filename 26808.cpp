//练习
//给定某年某月，输出这个月的天数
#include <stdio.h>
int year_judge (int &year) {
    int judge_leap = 0;
    if ((year%4)==0) {
        judge_leap = 1;
    }
    return judge_leap;
}

int month_judge (int &month,int &isleap) {
    if (isleap==1){
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            printf("这个月有31天\n");
        }else if(month==4||month==6||month==9||month==11) {
            printf("这个月有30天\n");
        }else if(month==2) {
            printf("今年是闰年,这个月有29天\n");
        }else {
            printf("一年有这么多月吗\n");
        }
    }
    else {
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            printf("这个月有31天\n");
        }else if(month==4||month==6||month==9||month==11) {
            printf("这个月有30天\n");
        }else if(month==2) {
            printf("今年是平年,这个月有28天\n");
        }else {
            printf("一年有这么多月吗\n");
        }
    }
    return 0;
}

int date_judge (int &date, int &month, int &isleap) {
    if (isleap ==0) {
        switch (month) {
        case 1:{date+=0;break;}
        case 2:{date+=31;break;}
        case 3:{date+=58;break;}
        case 4:{date+=90;break;}
        case 5:{date+=120;break;}
        case 6:{date+=151;break;}
        case 7:{date+=181;break;}
        case 8:{date+=212;break;}
        case 9:{date+=243;break;}
        case 10:{date+=273;break;}
        case 11:{date+=304;break;}
        case 12:{date+=334;break;}
        }
    }else {
        switch (month) {
        case 1:{date+=0;break;}
        case 2:{date+=31;break;}
        case 3:{date+=59;break;}
        case 4:{date+=91;break;}
        case 5:{date+=121;break;}
        case 6:{date+=152;break;}
        case 7:{date+=182;break;}
        case 8:{date+=213;break;}
        case 9:{date+=244;break;}
        case 10:{date+=274;break;}
        case 11:{date+=305;break;}
        case 12:{date+=335;break;}
        }
    }
    printf("这天是这年的第%d天\n",date);
    return 0;
}

int main() {
    int year,month,date;
    printf("输入年度、月份和日期：\n");
    scanf("%d %d %d",&year,&month,&date);
    int isleap = year_judge(year);
    if (month>12||month<1||date>31||date<0){
        printf("我靠认真点啊\n");
    }else {
    month_judge(month,isleap);
    date_judge(date,month,isleap);
    }
    return 0;
}