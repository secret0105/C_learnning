//写一个hello world
// #include <stdio.h>

//直接引入printf 函数
extern int printf(const char *__restrict__, ...);

int main() {
    printf("Hello, World!\n");
    return 0;
}