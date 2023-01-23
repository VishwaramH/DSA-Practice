#include<stdio.h>
#include<string.h>
int checkrep(char str[50],int *len,int *flag){
    for(int i=*flag;i<len-1;i++){
        if(str[i]==str[i+1]){
            *flag = i;
            return 1;
        }
    }
    return 0;
}
int main()
{
    int j;
    char str[50];
    printf("Enter the string:\n");
    scanf("%s",str);
    int *len;
    *len  = strlen(str);
    int i=0;
    int *flag;
    while(checkrep(str,len,flag)){
        i = *flag;
        if (str[i] == str[i + 1])
            {
                *len -= 2;
                j = i;
                while (j<(*len))
                {
                    str[j] = str[j + 2];
                    j++;
                }
            }
    }
    if(*len!=0){
        printf("\n%s",str);
    }
    else{
        printf("\nIt's empty\n");
    }
    return 0;
}