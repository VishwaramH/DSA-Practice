#include<stdio.h>
#include<string.h>
int main()
{
    char name[] = "Vishwa Ram";
    printf("%c ",*(name+0));
    printf("%c ",*(name+5));
    printf("%c ",*(name+1));
    printf("%c \n",*(name+9));

    // assigning name[] to *nameptr
    char *nameptr;
    nameptr = name;
    printf("%c ",*(nameptr+3));
    printf("%c ",*(nameptr+7));
    return 0;
}