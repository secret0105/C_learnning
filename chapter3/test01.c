#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 判断输入的数字是否为闰年
//1.能被4整除，但是不能被100整除
//2.能被400整除


/*
int main(){
    int year;
    scanf("%d", &year);

    if((year % 4 ==0 && year % 100 != 0) || year % 400 == 0){
        printf("%d is a leap year.\n", year);
    }
    else{
        printf("%d is not a leap year.\n", year);
    }
}
*/

// 案例二，通过switch case 实现数字与月份的对应
/*
int main(){
    int month;
    scanf("%d", &month);
    switch(month){
        case 1:printf("January\n");break;
        case 2:printf("February\n");break;
        case 3:printf("March\n");break;
        case 4:printf("April\n");break;
        case 5:printf("May\n");break;
        case 6:printf("June\n");break;
        case 7:printf("July\n");break;
        case 8:printf("August\n");break;
        case 9:printf("September\n");break;
        case 10:printf("October\n");break;
        case 11:printf("November\n");break;
        case 12:printf("December\n");break;
        default:printf("Invalid month\n");break;
    }
}
*/

// 案例三 通过输入判断是哪个季节
/* int main(){
    int month;
    scanf("%d", &month);
    switch (month)
    {
    case 1: case 2 :case 3: printf("Spring\n"); break;
    case 4: case 5 :case 6: printf("Summer\n");break;
    case 7: case 8 :case 9: printf("Autumn\n");break;
    case 10: case 11: case 12: printf("Winter\n");break;
    default:
        printf("Invalid month\n");
        break;
    }
} */

// 案例四：计算阶乘
/* int main() {
    int n;
    scanf("%d", &n);
    int result = 1;
    for (int i = 2; i <= n; i++) { 
        result = result * i;
    }
    printf("%d的阶乘是%d\n", n, result);
} */


// 案例五 for循环打印金字塔
/*
  *  
 * * 
* * *
*/
/* int main(){
    int n ;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int j = 0; j < n - i; j++){
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++){
            printf("*");
        }
        printf("\n");
    }
} */

/* int main()
{
    // int nums[] = {};
    // for (int i = 0; i < 10; i++){
    //     nums[i] = i;
    // }

    int my_num[5];
    int number;
    int max;
    for (int i = 0; i < 5; i++){
        scanf("%d", &my_num[i]);
        if (my_num[i] > max){
            max = my_num[i];
        }
    }
    printf("数组最大值为：%d\n", max);

    return 0;
} */


// 求随机数的最小值

/* int main(){
    const int LEN = 5;
    int nums[LEN];
    int min ;
    const int LIMIT = 100;
    srand(time(NULL));
    
    for (int i = 0; i < LEN; i++){
        nums[i] = rand() % LIMIT + 1;
        printf("%d ", nums[i]);
    }
    printf("\n");
    min = nums[0];
    for (int i = 1; i < LEN; i++){
        if (nums[i] < min){
            min = nums[i];
        }
    }
    printf("最小值为：%d\n", min);
    return 0;
}
 */


