#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0;
    char str[30],search;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to find its frequency:\n");
    scanf("%c",&search);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==search){
            count++;
        }
    }
    printf("%c is repeated %d times",search,count);
    return 0;
}