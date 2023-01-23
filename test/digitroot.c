#include<stdio.h>
int root(int n) {
  if(n/10!=0){
    int sum;
  sum = (n%10 + root(n/10));
    if(sum/10!=0){
      root(sum);
    }
    else {
      return sum;
    }
  }
  else{
    return n;
  }
}
int main() {
  int num;
  scanf("%d",&num);
  printf("%d",root(num));
}