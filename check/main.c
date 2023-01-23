#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,val=1,i,j;
    scanf("%d",&size);
    int *arr = malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    while(size>1){
        for(i=0,j=i+1;i<size-1 && j<size;i++,j++){
            if(arr[i]%arr[j]!=0 && arr[j]%arr[i]!=0){
                val = 0;
                break;
            }
            else if(arr[i]>=arr[j] && arr[i]%arr[j]==0){
                arr[i] = arr[i]/arr[j];
            }
            else if(arr[j]>arr[i] && arr[j]%arr[i]==0){
                arr[i] = arr[j]/arr[i];
            }
        }
        if(val==0){
            break;
        }
        size--;
    }
    if(val!=0){
        printf("%d",arr[0]);
    }
    else{
        printf("%d ",val);
    }
    return 0;
}
