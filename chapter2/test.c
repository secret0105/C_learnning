#include<stdio.h>
#include<limits.h>


int main(){

    printf("int min:%d,int max:%d\n",INT_MIN,INT_MAX);
    float aa = 0.2;
    printf("aa = %f\n",aa); // 默认小数位6位


    // 交换变量 
    int a = 5;
    int b = 6;
    // 这里是不需要指定类型的
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a = %d,b = %d\n",a,b);


    return 0;

    // int min:-2147483648,int max:2147483647

}