#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void displaystring(char str[]){
    printf("String is: ");
    puts(str);
}
int main()
{
    char str[30];
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    displaystring(str);
    return 0;
}