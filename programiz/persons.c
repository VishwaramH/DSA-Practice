#include<stdio.h>
typedef struct person
{
    int age;
    float weight;
}person;
int main()
{
    person p1,*personptr;
    personptr = &p1;
    printf("Enter the person's age:\n");
    scanf("%d",&personptr->age);  
    printf("Enter the person's weight:\n");
    scanf("%f",&personptr->weight);
    printf("The person's age and weight are: %d and %.1f\n",personptr->age,personptr->weight); 
    return 0;
    // personptr->age is equivalent to (*personptr).age
    // personptr->weight is equivalent to (*personptr).weight
}