#include<stdio.h>
//定义自己的宏,定义宏属性不能用表达式
#define PI 3.14


int main(){
    //定义常量的方式
    const double L_PI = 3.14;
    // scanf 在获取浮点型值时，需要指定精度，lf代表double 普通f代表float
    
    double r = scanf("%lf",&r);
    double area = PI * r * r;
    printf("圆的面积为：%.2lf\n",area);

    //gcc -E 的结果
}