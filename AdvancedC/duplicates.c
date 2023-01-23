// finding duplicates in a string by comparing each character
// time complexity => O(n^2) // space complexity => O(1) // least efficient method
#include<stdio.h>
// finding the length of the string
int findlength(char str[]) {
    int len=0;
    for(int i=0;str[i]!='\0';i++) {
        len++;
    }
    return len;
}
// finding the duplicates in string
void duplicates(char str[],int n) {
    int i,j,flag;
    for(i=0;i<=n-2;i++) {
        flag = 0;
        if(str[i]!=1) {
            for(int j=i+1;j<=n-1;j++) {
                if(str[i]==str[j]) {
                    flag = 1;
                    str[j] = 1;
                }
            }
            if(flag) {
                printf("%c is the duplicate character in the given string\n",str[i]);
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    int len;
    len = findlength(str);
    duplicates(str,len);
}