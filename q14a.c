#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("sample_text.txt","r");
    printf("Printing using fgetc()\n");
    while (!feof(fp))
    {
        ch=fgetc(fp);
        printf("%C",ch);
    }
    rewind(fp);
    printf("\nPrinting using fgets()\n");
    char str[10];
    while (!feof(fp))
    {
        fgets(str,10,fp);
        printf("%s",str);
    }
    rewind(fp);
    char a1[10],a2[10],a3[10],a4[10],a5[10],a6[10];
    printf("\nPrinting using fscanf()\n");
    while (!feof(fp))
    {
        fscanf(fp,"%s %s %s %s %s %s",a1,a2,a3,a4,a5,a6);
        printf("%s %s %s %s %s %s ",a1,a2,a3,a4,a5,a6);
    }
    
    return 0;
}