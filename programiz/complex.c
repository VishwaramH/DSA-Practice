// passing structures by reference 
#include<stdio.h>
typedef struct complex
{
    float real;
    float imag;
}complex;
void add(complex c1,complex c2,complex *result){ // adding two complex numbers
    result->real = c1.real + c2.real; // adding real parts of c1 and c2
    result->imag = c1.imag + c2.imag; // adding imaginary parts of c1 and c2
}
int main()
{
    complex c1,c2,result;
    printf("Enter the real part and imagianry part for c1:\n");
    scanf("%f%f",&c1.real,&c1.imag);
    printf("Enter the real part and imaginary part for c2:\n");
    scanf("%f%f",&c2.real,&c2.imag);
    add(c1,c2,&result);
    printf("Real part: %.1f\nImaginary part: %.1f\n",result.real,result.imag);
    return 0;
}