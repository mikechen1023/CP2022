#include <stdio.h>

int main(){

    int sum = 0;
    int current, next;

#pragma omp parallel for shared (sum) private(current, next)
    for (int i=0; i<10000000; i++){
        for (int task=0; task<500; task++){}
        do{
            current = sum;
            next = current;
            next += 3;
            next -= 2;
        }while(!__sync_bool_compare_and_swap(&sum, current, next));
    }

    printf("Sum = %d\n", sum);
}