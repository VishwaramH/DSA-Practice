#include<stdio.h>
#include<stdlib.h>
void findSpecialProdArr(int size,int *arr,int prod,int *res) {
  for(int i=0;i<size;i++) {
    res[i] = prod/arr[i];
  }
}

int main()
{
  int size, prod = 1;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);
  int *arr = malloc(size*sizeof(int));
  int *res = malloc(size*sizeof(int));
  printf("Enter the elements of the array:\n");
  for(int i=0;i<size;i++) {
    scanf("%d",arr+i);
    prod = prod*(*(arr+i));
  }
  findSpecialProdArr(size,arr,prod,res);
  printf("Resultant array:\n");
  for(int i=0;i<size;i++) {
    printf("%d ",res[i]);
  }
  return 0;
}