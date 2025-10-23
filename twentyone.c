// Write a C program to print fibonacci series
#include<stdio.h>
int main(){
    int n = 10;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: \n");
    for (int i = 1; i <= n; i++){
        printf("%d\n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}