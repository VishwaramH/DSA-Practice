#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    long a;
    long long b;
    long double c;
    short d;
    printf("size of int=%d bytes\n", sizeof(y));

    printf("size of long=%d bytes\n", sizeof(a));
    printf("size of long long=%d bytes\n", sizeof(b));
    printf("size of long double=%d bytes\n", sizeof(c));
    printf("size of short=%d bytes\n", sizeof(d));
    return 0;
}
