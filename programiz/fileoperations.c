#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[50];
    int marks;
    FILE *fptr;
    fptr = fopen("V:\\fileoperations.txt","a"); // append mode
    if(fptr==NULL) {
        printf("Error!!\n");
        exit(1);
    }
    for(int i=1;i<2;i++) {
        printf("Enter student %d name: ",i);
        scanf("%s",name);
        printf("Enter student %d marks: ",i);
        scanf("%d",&marks);
        fprintf(fptr,"Name: %s\tMarks: %d\n",name,marks);
    }
    fclose(fptr);
    return 0;
}