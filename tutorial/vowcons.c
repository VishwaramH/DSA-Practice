#include<stdio.h>
int main()
{
    char ch1,ch2;
    scanf("%c %c",&ch1,&ch2);
    if((ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u') && (ch2=='a' || ch2=='e' || ch2=='i' || ch2=='o' || ch2=='u')) // 1
    {
        printf("Yes");
    }
    else if((ch1!='a' && ch1!='e' && ch1!='i' && ch1!='o' && ch1!='u') && (ch2!='a' && ch2!='e' && ch2!='i' && ch2!='o' && ch2!='u')) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}