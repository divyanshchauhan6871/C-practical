#include<stdio.h>
// #include<str.h>
#include<stdlib.h>
int main()
{
    char str[]="Divyansh";
    char * n=str;
    char ** nn=&n;
    int i=0;
    while (*(*(nn)+i)!='\0')
    {
        printf("%c",*(*(nn)+i));
        i++;
    }
    
    return 0;
}