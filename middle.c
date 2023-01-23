#include<stdio.h>

int main() {
    int n,a[100],k,low, high, mid, flag=0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    
    low = 0;
    high = n-1;
    mid = (low + high)/2;
    while(low<=high) {
        if (k==a[mid]){
            flag = 1;
            printf("%d ",a[mid]);
            break;
        }
        else if(k < a[mid]){
            high = mid-1;
        }
        else {
            low = mid + 1;
        }
        printf("%d ",a[mid]);
        mid = (low+high) / 2;
    }
    return 0;
}