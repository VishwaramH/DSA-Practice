#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("V:\sample.txt","w");
    // if(fptr==NULL){
    //     printf("Error!!\n");
    //     exit(1);
    // }
    printf("Enter the number:\n");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}