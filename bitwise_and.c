#include<stdio.h>
int main()
{
    int arr[100];
    int len,t,l,r,v;
    scanf("%d%d",&len,&t);
    for(int i=1;i<=len;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<=t;j++)
    {
        scanf("%d%d%d",&l,&r,&v);
        for(int k=1;k<=r;k++){
            arr[k]=arr[k] & v;
        }
    }

    for(int h=1;h<=len;h++){
        printf("%d ",arr[h]);
    }
}