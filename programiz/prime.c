// optimized code
#include<stdio.h>
#include<math.h>
int main() {
    int num,count,max,i;
    printf("Enter the number:\n");
    scanf("%d",&num);
    max = sqrt(num);
    for(i=2;i<=max;i++) {
        if(num%max==0) {
            count++;
            break;
        }
        else if(num%i==0) {
            count++;
            break;
        }
    }
    if(count>=1) {
        printf("%d is a not a prime number\n",num);   
    }
    else {
        printf("%d is a prime number\n",num);
    }
    return 0;
}