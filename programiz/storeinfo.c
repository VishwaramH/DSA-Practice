#include<stdio.h>
typedef struct details{
    char name[50];
    int rollno;
    float marks;
}stud;
int main()
{
    stud s1;
    printf("Enter the student's name:\n");
    fgets(s1.name,sizeof(s1),stdin);
    printf("Enter the student's roll no:\n");
    scanf("%d",&s1.rollno);
    printf("Enter the students's marks:\n");
    scanf("%f",&s1.marks);
    printf("Displaying information:\n");
    printf("Name: %s",s1.name);
    printf("Roll no: %d\n",s1.rollno);
    printf("Marks: %.1f\n",s1.marks);
    return 0;
}