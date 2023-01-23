#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    printf("The string is: ");
    puts(str);
    printf("\nThe length is: %ld",strlen(str));
    return 0;
}