#include<stdio.h>
int main()
{
    int i,j;
    char str1[50]="programming is ",str2[20]="life";
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++,i++){
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    printf("Concatenated string is: ");
    puts(str1);
    return 0;
}