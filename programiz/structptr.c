#include<stdio.h>
#include<stdlib.h>
typedef struct person
{
    int age;
    char name[20];
}person;
int main()
{
    person *ptr;
    int num;
    printf("Enter the number of persons:\n");
    scanf("%d",&num);
    ptr = (person*)malloc(num*sizeof(person));
    printf("Enter the name and age of %d persons:\n",num);
    for(int i=1;i<=num;i++){
        printf("Enter person %d details: ",i);
        scanf("%s %d",(ptr+i)->name,&(ptr+i)->age);
    }
    printf("Displaying the person's details:\n");
    for(int i=1;i<=num;i++){
        printf("Person %d\tName: %s\tAge: %d\n",i,(ptr+i)->name,(ptr+i)->age);
    }
    return 0;
}