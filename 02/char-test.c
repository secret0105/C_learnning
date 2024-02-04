#include<stdio.h>

int main(){

    // 字符串的定义
    char name[] = "hello world";
    printf("%s\n",name);

    //查看字符串大小与字符串长度，两者并不是相等的
    char name_1[10] = "zhangsan" ;
    printf("name_1 size:%d\n",sizeof(name_1));
    printf("name_1 length:%d\n",strlen(name_1));

    // 输出结果
    // name_1 size:10
    // name_1 length:8
    return 0;

}