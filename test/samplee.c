#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[100];
    scanf("%s",s);
    printf("%ld ",strlen(s));
    for(i=0;i<strlen(s)-1;i++){
        printf("%d ",strlen(s));
        s[i] = s[i+1];
    }
    s[i] = '\0';
    printf("%ld ",strlen(s));
    printf("%s ",s);
}