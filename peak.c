#include <stdio.h>

int main()
{
    int n, a[100],i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        if((i!=0) && (i!=n-1) && (a[i]>a[i+1]) && (a[i]>a[i-1])) {
            printf("%d ",a[i]);
        }
        else if((i==0) && (a[i]>a[i+1])) {
            printf("%d ",a[i]);
        }
        else if((i==n-1) && (a[i]>a[i-1])) {
            printf("%d ",a[i]);
        }
        else {
            break;
        }
    }
    return 0;
}
