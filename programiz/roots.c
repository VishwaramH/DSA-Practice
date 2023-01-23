#include<stdio.h>
#include<math.h>

int main() {
    double a,b,c,discriminant, root1, root2, realPart, imagPart;
    printf("Enter the values of a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant = b*b-4*a*c;
    // if the roots are real and different
    if(discriminant>0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots are real and different\n");
        printf("root1 = %.2lf\nroot2 = %.2lf\n",root1,root2);
    }
    // if the roots are real and equal
    else if(discriminant == 0) {
        root1 = -b / (2*a);
        printf("The roots are real and equal\n");
        printf("root1 = root2 = %.2lf\n",root1); 
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant)/(2*a);
        printf("The roots are complex and different\n");
        printf("root1 = %.2lf + %.2lfi\nroot2 = %.2lf - %.2lfi\n",realPart,imagPart,realPart,imagPart);
    }
    return 0;
}