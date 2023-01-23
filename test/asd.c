#include<stdio.h>
int main() {
    int size,pos;
    char ch;
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<=size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the pos:\n");
    scanf("%d",&pos);
    printf("Enter a char:\n");
    scanf(" %c",&ch);
    for(int i=1;i<=size;i++) {
        if(i==pos) {
            if(ch=='a' || ch=='A') {
                int j = 2;
                while(j<=pos) {
                    arr[1] += arr[j];
                    arr[j] = 0;
                    j++;
                }
                break;
            }
            else if(ch=='d' || ch=='D') {
                while(pos<size) {
                    arr[size] += arr[pos];
                    arr[pos] = 0;
                    pos++;
                }
                break;
            }
            else if(ch=='s' || ch=='S') {
                int temp = arr[pos];
                int j=pos;
                while(j<size) {
                    arr[size] += arr[j];
                    arr[j] = 0;
                    j++;
                }
                int k = 2;
                while(k<pos) {
                    arr[1] += arr[k];
                    arr[k] = 0;
                    k++;
                }
                arr[1] += temp;
                break;
            }
        }
    }
    for(int i=1;i<=size;i++) {
        printf("%d ",arr[i]);
    }
}