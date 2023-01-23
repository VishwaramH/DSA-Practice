#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter the sentence:\n");
    scanf("%[^\n]s",str);
    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}