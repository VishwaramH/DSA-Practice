// finding the duplicates in a string using hash table
// time complexity => O(n) // space complexity => O(1) // second most efficient method
#include<stdio.h>
void duplicate(char str[]) {
    int hash[26] = {0}; // initialising all the elements of the array to 0 (a to z count)
    int i;
    while(str[i]!='\0') {
        hash[str[i]-97]++;  // since all the elements have a common difference of 97
        i++;
    }
    for(int i=0;i<26;i++) {
        if(hash[i]>1) {
            printf("%c is the duplicate character\n",i+97);
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string:\n");
    scanf("%[^\n]s",str);
    duplicate(str);
    return 0;
}