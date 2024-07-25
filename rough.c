#include <stdio.h>
void revstr(char name[],int n){
    if (name[n]!='\0'){
        revstr(name,n+1);
        printf("%c",name[n]);
    }
}
void revstr1(char name[]){
    if (*name!='\0'){
        revstr1(name+1);
        printf("%c",*name);
    }
}
char * strcopy(char *str1,char *str2){
    while (*str1!='\0')
    {
        *str2=*str1;
        str1++;
        str2++;
    }
    return str2;
}
// char * strcopy(char *str1,char *str2){
//     while (*str1!='\0')
//     {
//         *str2++=*str1++;
//     }
//     return str2;
// }
int main()
{
    // char name[]={'D','i','v','y','a','n','s','h',' ','C','h','a','u','h','a','n','\0'};
    // revstr(name,0);
    // printf("\n");
    // revstr1(name);
    char str1[]="Divyansh";
    char str2[20];
    printf("%s",strcopy(str1,str2));
    printf("%s",str2);
    return 0;
}