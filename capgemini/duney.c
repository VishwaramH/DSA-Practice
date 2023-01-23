#include<stdio.h>
#include<math.h>
int main()
{
    int num,squared,tempsq,count=0,rightval,leftval,helper;
    scanf("%d",&num);
    squared = num*num;
    tempsq = squared;
    while(squared) {
        squared /= 10;
        count++;
    }
    squared = tempsq;
    if(count%2!=0) {
        printf("%d is not a duney number\n",num);
    }
    else {
        helper = (int)pow(10,(count/2));
        rightval = squared%helper;
        leftval = squared/helper;
        if(leftval+rightval==num) {
            printf("%d is a duney number\n",num);
        }
        else {
            printf("%d is not a duney number\n",num);
        }
    }
    return 0;
}