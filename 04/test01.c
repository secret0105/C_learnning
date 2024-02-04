#include<stdio.h>
#include<math.h>

/* #define NUM 9
// 打印九九乘法表
int main(){

    for(int i = 1; i <= NUM; i++){
        for (int j = 1; j <= i; j++){
            printf("%d*%d=%d\t", j, i, i*j);
        }
        printf("\n");
    }
    return 0;
} */


// 案例二， 求整数的位数
// 思路 整数/10 如果不为0，则代表位数+1
// while 写法
/* int main(){
    int num;
    scanf("%d", &num);
    int count = 0;
    if(num == 0){
        count = 1;
    }else{
        while(num > 0){
            num /= 10;
            count++;
        }
    }
    printf("整数的位数为：%d\n", count);
    return 0;
} */

// do...while 写法
// 适合情况，循环至少执行一次
/* int main(){
    int num;
    scanf("%d", &num);
    int count = 0;
    do{
        num /= 10;
        count++;
    }while(num > 0);  //while 作为do..while的语句块，结束后需要分号
    printf("整数的位数为：%d\n", count);
    return 0;   
} */

// 案例三 逆向输出整数
// 123 输出321
/* int main(){
    int num;
    scanf("%d", &num);
    int count = 0;
    int sum = 0;
    do{
        sum = sum*10 + num%10;
        num /= 10;
        count++;
    }while(num > 0);
    printf("逆序输出为：%d\n", sum);
    return 0;

}
 */

// 案例四 求水仙花数

/* int main(){
    int n;
    scanf("%d", &n);

    int first = pow(10, n-1);
    int end = pow(10, n);

    for (int i = first; i < end; i++){
        int sum = 0;
        int num = i;
        do{
            int digit = num % 10;
            sum = sum + pow(digit,n);
            
            num /= 10;
        }while(num > 0);

        if (sum == i){
            printf("%d\n",i);
        }
    }
    return 0;
} */

// 不推荐使用pow,原因是pow 传参和返回值都是double类型，如果传入整数，会出现精度丢失导致结果错误的情况
// 解决办法，自定义pow函数

/* int my_pow(int x, int y){
    if (x == 0)
        return 0;
    int sum = 1;
    for(int i = 0; i < y; i++)
    {
        sum = sum * x;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);

    int first = my_pow(10,n-1);
    int end = my_pow(10,n);

    for (int i = first; i < end; i++){
        int sum = 0;
        int count = 0;
        int num = i;
        do{
            int digit = num % 10;
            sum = sum + my_pow(digit,n);
            num = num / 10;

        }while(num > 0);

        if (sum == i){
            printf("%d\n",i);
        }
    }
}
 */


// 案例五  回文
// 输入字符串，判断是否为回文 
// 解题思路，两个参数参与循环
/* #include<stdbool.h>
#define MAX 21
int main(){
    // 字符串变量名本身就是指针
    char str[MAX] = "";
    // 设置只读取前20位字符
    scanf("%20s",str);
    int len = -1;
    while(str[++len] != '\0');

    bool flag = true;
    for (int i = 0,j = len - 1;i < j; i++,j--){
        if (str[i] != str[j])
            // 这里可以直接跳出循环
            flag = false;
    }
    if(flag)
        printf("%s is a plalindrome\n",str);
    else
        printf("%s is not a plalindrome\n",str);
} */



// 选择排序 n个元素  需要进行排序n-1次，每次选出最大值或者最小值
// 待优化的地方，对于已有的排序，如何减少循环次数
#define MAX 9
int main(){

    // 从终端输入数字，存入到数组中

    int len = -1;
    int nums[MAX];

    while(scanf("%d",&nums[++len]) != EOF);

    //遍历数组
    for(int i = 0; i < len; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("==========================\n");

    // 进行选择排序
    // 最后一轮是不用排序的，因此可以少循环一次
    for (int i = 0; i < len; i++){
        // 定义一个最小值，即当前下标的元素
        int min = nums[i];
        int min_index = i;
        for(int j = i + 1; j < len; j++){
            if (nums[j] < min){
                // 直接进行交换
                min_index = j;
                // 重新赋予最小值
                min = nums[j];
            }
        }
        // 打印颜色
        for (int k = 0; k < len; k++){
            if (k == i){
                printf("\033[40;31m%d\033[0m ",nums[k]);  // 白底红字
            }
            else if(k == min_index){
                printf("\033[43;37m%d\033[0m ",nums[k]); // 黄  底白字
            }
            else{
                printf("%d ",nums[k]);
            }
        }
        printf("\n");

        // 交换数字, min 和当前下标
        // 增加调教判断，是否需要交换
        if (min_index != i){
            int tmp = nums[i];
            nums[i] = nums[min_index];
            nums[min_index] = tmp;
        }

        
    }

    printf("\n");

    for(int i = 0; i < len; i++){
        printf("%d ", nums[i]);
    }

    printf("\n");

}




