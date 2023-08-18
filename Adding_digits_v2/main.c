#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "header.h"

int main() {

    while (1) {

    int n,i,L, sum = 0;
    int R = 1;

    printf("Please enter the number\n");
    scanf("%d", &n);

    L = NumLen(n);

     for (i=0; i<=L; i++){
        R = n % 10;
         if (n == 10){
            sum = sum + R + 1;
        }
        else
            sum += R;
        n = n / 10;
    }

    printf("Sum of digits of your number is %d\n", sum);
    }
    return 0;
}
