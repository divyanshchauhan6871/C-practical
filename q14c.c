#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fpr,*fpw;
    fpr=fopen("b2.c","rb");
    fpw=fopen("copied.txt","wb");
    char ch[10];
    while(!feof(fpr)){
        fgets(ch,10,fpr);
        fputs(ch,fpw);
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}