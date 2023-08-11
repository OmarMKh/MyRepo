/*
Write a program that takes 2 numbers from the user, and prints all the numbers between them in either ascending or descending order,
depending on the user input
*/

#include <stdio.h>
#include <stdlib.h>

#include "Ascending_order.h"
#include "Descending_order.h"

int num1;
int num2;

char order;

int main()
{
    printf("Please enter the two numbers\n");
    scanf("%i%i", &num1, &num2);

          //scanf("%i", &num1);
          //scanf("%i", &num2);

    printf("Please type a if you wish the numbers to be printed in ascending order, and type d otherwise\n");
    scanf(" %c", &order);

    if (order=='a')
    {
        print_with_ascending_order(num1, num2);
    }

    else if (order=='d')
    {
        print_with_descending_order(num1, num2);
    }

    else
        printf("Please enter either a or d");

    return 0;
}
