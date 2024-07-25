#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    char str[25];
    gets(str);
    printf("Size of string is %d.\n", strlen(str));
    puts(str);

    char s1[20] = "Hello";
    char s2[20] = " World";

    if (strcmp(s1, s2) == 0)
    {
        printf("string 1 and string 2 are equal\n");
    }
    else
    {
        printf("string 1 and 2 are different\n");
    }
    strcat(s1, s2);
    printf("Output string after concatenation: %s.\n", s1);
    /* this function has copied s2 into s1*/
    strcpy(s1, s2);
    printf("String s1 is: %s.\n", s1);
    return 0;
}