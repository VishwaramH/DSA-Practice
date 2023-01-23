#include<stdio.h>
#include<stdlib.h>
void generatePref(int *pref, int *arr, int num) 
{
    pref[0] = 0;
    for(int i=0;i<num;i++)
    {
        pref[i+1] = pref[i] + arr[i];
    }
}

void invert(int *pref, int *arr,int L, int R)
{
    for(int i=L-1;i<R;i++) {
        if(arr[i]==1) {
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }
} 

int add(int *pref, int num, int L, int R)
{   
    int sum = 0;
    for(int i=L;i<=R;i++)
    {
        sum += pref[i];
    }
    return sum;
}

int main() 
{
    int num,queries;
    scanf("%d %d",&num,&queries);
    int *arr;
    int *pref;
    arr = malloc(num*sizeof(int));
    pref = malloc((num+1)*sizeof(int));
    for(int i=0;i<num;i++)
    {
        scanf("%d",(arr+i));
    }
    generatePref(pref,arr,num);
    for(int j=0;j<queries;j++) {
        int T, L, R;
        scanf("%d %d %d",&T,&L,&R);
        if(T==1) {
            invert(pref,arr,L,R);
            generatePref(pref,arr,num);
        }
        else if(T==2) {
            printf("%d\n",add(pref,num,L,R));
        }
    }
    return 0;
}