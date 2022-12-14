/*  
    @Desc: Ver1: Serial version  
    @Use:
        gcc ver1.c; time ./a.out
*/

#include <stdio.h>

int main(){

    int sum = 0;

    for (int i=0; i<10000000; i++){

        for (int task=0; task<500; task++){}; // 假裝做其他事情

        // 故意讓他有兩個指令
        sum += 3;
        sum -= 2;
    }

    printf("Sum = %d\n", sum);
}