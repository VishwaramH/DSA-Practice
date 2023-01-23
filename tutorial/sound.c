#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        char letter;
        scanf(" %c",&letter);
        if(letter=='D') {
            printf("Bark\n");
        }
        else if(letter=='C') {
            printf("Meow\n");
        }
        else {
            printf("Cuckoo\n");
        }
    }
}