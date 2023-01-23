#include<stdio.h>
// precedence for operators =>  ()=3 ; /,* = 2 ; +,- = 1

// to find the area of a triangle
int main() {
    int base,height,area;
    printf("Enter the values for base and height:\n");
    scanf("%d %d",&base,&height);
    area = (float)1/2*base*height;
    printf("The area of the triangle is: %d\n",area);
    return 0;
}

// perimeter of a rectangle => 2*(l+b)
// sum of N natural numbers => n*(n+1)/2
// Nth term in AP series ,t = a + (n-1)*d    where a=>first term , n=>the no of term to be found, d=>common difference
// speed s => (v*v - u*u) / (2*a)  where v => final velocity , u => initial velocity , a => acceleration

