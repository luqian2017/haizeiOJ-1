/*************************************************************************
	> File Name: 156.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月16日 星期六 18时24分40秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sqare1 (int x) {
    int n;
    n = (x / 1000 % 10) * 10 + (x / 100 % 10);
    for(int i = 0; i * i <= n; i++) {
        if(i * i == n) {
            return 1;
        }
    }
    return 0;
}
int sqare2(int y) {
    int m;
    m = (y / 10 % 10) * 10 + (y % 10);
    for(int i = 0; i * i <= m; i++) {
        if(i * i == m) {
            return 1;
        }
    }
    return 0;
}
int prime(int z) {
    for(int i = 2; i < z;i++) {
        if(z % i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int a,b;
    int flag = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) {
        if(prime(i) && sqare1(i) && sqare2(i)) {
            if(flag == 0) {
                printf("%d",i);
            } else {
                printf(" %d", i);
            }
            flag++;
        }
    }
    printf("\n%d", flag);
    return 0;
}
