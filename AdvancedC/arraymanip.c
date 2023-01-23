// Hackerrank
// optimized code
// n=5, m=3, arr = {0,0,0,0,0} 
// step    a    b    k      actual algorithm
//  1      1    2    100    {100,100,0,0,0}
//  2      2    5    100    {100,200,100,100,100}
//  3      3    4    100    {100,200,200,200,100}
// output => 200  (since 200 is the max element)
// here n=>no of elements in the array, m=> no of manipulations, k=> the summand
// algorithm followed(optimized)
// step1=>  +100    0    -100    0   0
// step2=>        +100                    -100
// step3=>                +100       -100
// result=> {100,100,0,0,-100}  for original result (add arr[i] + arr[i-1]) =>  {100,200,200,200,100}
// max => output => 200
#include<stdio.h>
#include <stdlib.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    long long int *arr;
    arr = malloc((n+1)*sizeof(long long int));
    for(int i=0;i<=n;i++) {
        arr[i] = 0;
    }
    for(long long int i=1;i<=m;i++) {
        long long int a,b,k;
        scanf("%lli%lli%lli",&a,&b,&k);
        // most important and optimized part
        arr[a] += k;     
        if(b+1<=n) {
            arr[b+1] -= k;
        }
    }
    long long int max=0;
    for(long long int i=1;i<=n;i++) {
        arr[i] = arr[i] + arr[i-1];
        max = (arr[i] > max ? arr[i] : max);
    }
    printf("%lli\n",max);
}
