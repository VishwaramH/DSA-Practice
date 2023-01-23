// prime numbers between any two intervals
#include<stdio.h>
#include<math.h>
int main() {
    int i,low,high,max;
    printf("Enter the range:\n");
    scanf("%d%d",&low,&high);
    printf("The primes between %d and %d are:\n",low,high);
    while(low<high) {
        int count=0;
        max=sqrt(low);
        for(i=2;i<=max;i++) {
            if(low%max==0) {
                count++;
                break;
            }
            else if(low%i==0) {
                count++;
                break;
            }
        }
        if(count==0) {
            printf("%d ",low);
        }
        ++low;
    }
    return 0;
}