#include <stdio.h>
#include <limits.h>
int main() {    int x = 10;    int *ptr = &x;    if (x + 10 > INT_MAX) {        printf("Integer overflow detected!\n");        return 1;    } else {        *ptr = x + 10;        printf("%d\n", x);    }    return 0;} 