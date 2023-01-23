// remove all characters in a string except alphabets
#include<stdio.h>
int main()
{
    int i,j;
    char str[40];
    printf("Enter a string:\n");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++) {  // abcd12ab // abcd2ab //  abcdab
        while(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]=='\0')) {
            for(j=i;str[j]!='\0';j++){
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }
    printf("String after removing characters except alphabets: %s\n",str);
    return 0;
}