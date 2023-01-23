// armstrong numbers between any two intervals
#include<stdio.h>
#include<math.h>
int main() {
    int low,high,temp,num,rem,count=0;
    double result = 0.0;
    printf("Enter the two intervals:\n");
    scanf("%d %d",&low,&high);
    printf("The Armstrong numbers between %d and %d are:\n",low,high);
    for(num=low+1;num<high;num++) {
        temp = num;
        // calculating the no of digits 
        while(temp!=0) {
            temp/=10;
            count++;
        }
        temp = num;
        // finding the sum of the cubes of digits
        while(temp!=0) {
            rem = temp%10;
            result += pow(rem,count);
            temp /= 10;
        }
        // checking whether the number is armstrong num or not and displaying the values
        if((int)result == num) {
            printf("%d ",num);
        }
        // resetting values
        count = 0;
        result = 0;
    }
    return 0;
}