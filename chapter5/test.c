#include <stdio.h>

// 反转数组
#define N 10

// int main(){

//     int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     for(int i = N; i > 0; i--){
//         printf("%d ",a[i - 1]);
//     }
//     printf("\n");

// }

// 插入排序

// int main()
// {
//     int nums[] = {32, 78, 96, 11, 45, 2, 7, 3, 9};
//     int len = sizeof(nums) / sizeof(nums[0]);

//     // 插入排序可以从第二个参数开始循环比较
//     for(int i = 1; i < len; i++){
//         int insert = nums[i];
//         int j;
//         // 内层循环的结束条件
//         for(j = i - 1; j >= 0 && nums[j] > insert; j--){
//             // 这里的作用是将每个数字依次向后移
//             nums[j+1] = nums[j];
//         }

//         nums[j+1] = insert;
//     }

//     for(int i = 0; i < len; i++){
//         printf("%d ",nums[i]);
//     }
//     printf("\n");
// }

// 多维数组的定义
// #define ROW 4
// #define COL 3

// int main()
// {

//     int a[ROW][COL] = {{1, 2, 3}, {4, 5, 6},{7,8,9},{0,1,2}};
//     int b[2][3] = {1, 2, 3, 4, 5, 6};
//     int c[][3] = {1, 2, 3, 4, 5, 6}; // 等价于int c[2][3]

//     // 二维数组的遍历

//     for (int i = 0; i < ROW; i++){
//         for (int j = 0; j< COL; j++){
//             // 直接打印数组地址
//             printf("&a[%d][%d] = %p ; a[%d][%d] = %d\n",i,j,&a[i][j],i,j,a[i][j]);
//             // 地址是连续存储的，并且以4为单位递增，因为int型数据占用了四个字节
//             //&a[0][0] = 0x7fffe058e580 ; a[0][0] = 1
//             // &a[0][1] = 0x7fffe058e584 ; a[0][1] = 2
//         }
//     }
// }

// 鞍点：每行中最大的值同时是每行中最小的值

#define ROW 5
#define COL 5
#include <stdbool.h>
int main()
{
    // 使用二维数据定义一个矩阵

    int arr[ROW][COL] = {
        {3, 4, 9, 6, 7},
        {4, 3, 5, 1, 2},
        {1, 3, 8, 7, 9},
        {2, 4, 6, 8, 10},
        {3, 5, 7, 7, 3}
    };

    // 使用bool数组来判断元素是否为鞍点
    int max_in_row[ROW][COL] = {false};
    int min_in_col[ROW][COL] = {false};

    // 找出每行最大值
    for(int i = 0; i < ROW; i++){
        int max = arr[i][0];
        for(int j = 1; j < COL; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }

        // 需要再进行一次循环，可能有多个最大值或者最小值
        for(int j = 0; j < COL; j++){
            if (arr[i][j] == max){
                max_in_row[i][j] = true;
            }
        }
    }
    // 找出每列最小值

    for(int j = 0; j < COL; j++){
        int min = arr[0][j];
        for(int i = 1; i < ROW; i++){
            if (arr[i][j] < min){
                min = arr[i][j];
            }
        }

        for(int i = 0; i < ROW; i++){
            if(arr[i][j] == min){
                min_in_col[i][j] = true;
            }
        }


    }


    for (int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if (max_in_row[i][j] == true && min_in_col[i][j] == true){
                printf("[%d] ",arr[i][j]);
            }else {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}
