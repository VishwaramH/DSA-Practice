#include<stdio.h>
int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("V:\sample.txt","r"); // opened the file in read only mode
    fscanf(fptr,"%d",&num); // reading the integer from a file
    printf("Value in the file is: %d\n",num); // printing the value
    fclose(fptr);
    return 0;
}