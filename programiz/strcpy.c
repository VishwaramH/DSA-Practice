#include<stdio.h>
int main()
{
    int i,j;
    char str1[30],str2[30];
    printf("Enter the string1:\n");
    scanf("%[^\n]s",str1);
    for(i=0,j=0;str1[i]!='\0';i++,j++){
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    printf("String 2 is: %s\n",str2);
    return 0;
}