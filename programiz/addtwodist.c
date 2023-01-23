#include<stdio.h>
struct distance{
    int feet;
    float inch;
};
int main()
{
    struct distance d1,d2,sum;
    printf("Enter 1st distance:\n");
    printf("Enter feet:\n");
    scanf("%d",&d1.feet);
    printf("Enter inches:\n");
    scanf("%f",&d1.inch);
    printf("Enter 2nd distance:\n");
    printf("Enter feet:\n");
    scanf("%d",&d2.feet);
    printf("Enter inches:\n");
    scanf("%f",&d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    while(sum.inch>=12) {  // since 12 inches make a foot
        sum.feet++;
        sum.inch -= 12;
    }
    printf("The total distance is %d'-%.1f\"",sum.feet,sum.inch);
    return 0;
}