#include<stdio.h>

// 一个简单的打印任务

int main(){
    char first_name[] = "Xiaoming";
    char last_name[] = "Wang";
    char abbrev_name = 'M';

    char weekday[] = "Saturday";

    int day = 1;
    int month = 1;
    int year = 2000;

    int C_oj = 100;
    int C_mid = 90;
    int C_final = 80;

    double average = (C_oj + C_mid + C_final) / 3.0;
    
    printf("%s\t%s\t%c\n",first_name,last_name,abbrev_name);
    printf("%02d-%02d-%4d\t %.3s.\n",day,month,year,weekday);
    printf("%d\t%d\t%d\n",C_oj,C_mid,C_final);
    printf("%.2f\t%d%%\n",average,10);

}