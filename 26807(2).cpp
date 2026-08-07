#include <stdio.h>
char classfication(int &result) {
    char grade;
    if (result>=90) {
        grade = 'A';
    }
    else if (result>=80 && result<90) {
        grade = 'B';
    }
    else if (result>=70 && result<80) {
        grade = 'C';
    }
    else if (result>=60 && result<70) {
        grade = 'D';
    }
    else {
        grade = 'E';
    }
    return grade;
}

void grade_result (char &grade) {
    switch(grade) {
        case 'A' :
        printf("excellent\n");
        break;
        case 'B' :
        printf("very good\n");
        break;
        case 'C' :
        printf("nice\n");
        break;
        case 'D' :
        printf("okay\n");
        break;
        case 'E' :
        printf("common\n");
        break;
    }
}
int main() {
    int result;
    printf("输入您的成绩：\n");
    scanf("%d",&result);
    char grade = classfication(result);
    printf("您的成绩等级是%c\n",grade);
    grade_result(grade);
    return 0;
}