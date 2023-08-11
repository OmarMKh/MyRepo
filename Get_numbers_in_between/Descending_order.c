#include <stdio.h>
#include <stdlib.h>

void print_with_descending_order (int num1, int num2)
{
    //int diff;
    int counter = 0;

    printf("The numbers between %i and %i in descending order are: \n", num1, num2);

     if (num1>num2)
    {
        //diff=num1-num2;

        for (counter=num1-1; counter>num2; counter--)
        {
            printf("%i\n", counter);
        }
    }

    else if (num1<num2)
    {
        //diff=num2-num1;

           for (counter=num2-1; counter>num1; counter--)
        {
            printf("%i\n", counter);
        }
    }

    else
        printf("Please enter two different numbers");
}
