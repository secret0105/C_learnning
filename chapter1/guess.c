#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//完成一个猜数字的游戏

int main(int argc, char const *argv[])
{
    /* code */
    int limit_num = 100;
    int num_tries = 7;

    //生成随机数
    srand(time(NULL));
    int secret_num = rand() % limit_num + 1;

    //提示用户输入猜测的数字
    printf("猜一个1到%d之间的数字，你有%d次机会。\n", limit_num, num_tries);


    //循环进行猜测
    for(int i = num_tries; i > 0; i--){
        int guess;
        printf("请输入你的猜测：");
        // & 用来获取变量在内存中的值
        scanf("%d", &guess);

        //判断猜测结果
        if(guess < secret_num){
            printf("太小了！\n");
        }
        else if(guess > secret_num){
            printf("太大了！\n");
        }
        else{
            printf("恭喜你，猜对了！\n");
            break;
        }
        printf("你还剩余%d次机会\n", i);
    }


    return 0;
}
