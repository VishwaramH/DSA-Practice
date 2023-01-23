#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n, sum=0;
    int ans;
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    int min = INT_MAX;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];
        if(arr[i]<min) {
            min = arr[i];
        }
    }
    while(1) {
        if(min*n>sum){
            ans = min;
            break;
        }
        else {
            min++;
        }
    }
    printf("%d",ans);
    return 0;
}
