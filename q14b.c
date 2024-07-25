#include<stdio.h>
#include<string.h>
// #include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("First_name.txt","w");
    char str[20];
    printf("Enter your name : ");
    gets(str);
    printf("Into the file using fputc()\n");
    int n=strlen(str);
    for (int i = 0; i < n; i++)
    {
        fputc(str[i],fp);
    }
    fclose(fp);    
    fp=fopen("last_name.txt","w");
    printf("Enter your name : ");
    gets(str);
    rewind(fp);
    fputs(str,fp);
    printf("Into the file using fputs()\n");
    fclose(fp);    
    fp=fopen("Full_name.txt","w");
    printf("Enter your Full name : ");
    gets(str);
    rewind(fp);
    fprintf(fp,"%s",str);
    printf("Into the file using fprintf()\n");
    return 0;
}