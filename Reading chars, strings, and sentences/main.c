#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    while (1){


    char ch;
    char s[30];
    char sen[99];

    printf("Please enter a character\n");
    scanf("%c", &ch);

    printf("Please enter a word\n");
    scanf("%s", &s);

    printf("Please enter a short sentence\n");
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
