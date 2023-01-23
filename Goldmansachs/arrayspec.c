// without using division operator
#include<stdio.h>
#include<stdlib.h>
void findSpecial(int *leftarr,int *rightarr,int size,int *finalarr,int *input)
{
  for(int i=1;i<size;i++) {
    leftarr[i] = input[i]*leftarr[i-1];
  }
}
int main()
{
  int size;
  printf("Enter the size:\n");
  scanf("%d",&size);
  int *leftarr,*rightarr,*finalarr,*input;
  input = malloc(size*sizeof(int));
  leftarr = mallo((size+2)*sizeof(int));
  rightarr = malloc((size+2)*sizeof(int));
  finalarr = malloc(size*sizeof(int));
  leftarr[0] = leftarr[size] = rightarr[0] = rightarr[size] = 1;
  printf("Enter the elements:\n");
  for(int i=1;i<=size;i++) {
    scanf("%d",input+i);
  }
  findSpecial(leftarr,rightarr,size,finalarr,input);
  return 0;
}