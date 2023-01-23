#include<stdio.h>
int main()
{
    float count=0;
    char str[50];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]=='T') {
            count++;
        }
        else if(str[i]=='S') {
            count += 0.5;
        }
    }
    printf("%d",(int)(count));
    return 0;
}