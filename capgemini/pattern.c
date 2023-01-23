#include<stdio.h>
int main()
{
  int row,col,start=1,end=20;
  for(row=1;row<=4;row++) {
    for(col=1;col<=5;col++) {
      if(row>=col) {
        printf("%d ",start++);
      }
      else {
        printf("%d ",end--);
      }
    }
    printf("\n");
  }
  return 0;
}