#include<stdio.h>
int main()
{
    int i;
    char s[30];
    printf("Enter the string:\n");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++);
    printf("Length of the string is: %d",i);
    return 0;
}