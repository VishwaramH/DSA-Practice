#include<stdio.h>
#include<string.h>
int main()
{
    int key;
    char str[50],encr[50],decr[50];
    printf("Enter the plain text:\n");
    scanf("%s",str);
    printf("Enter the key:\n");
    scanf("%d",&key);
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]+key)<=90){
            encr[i] = str[i] + key;
        }
        else {
            encr[i] = (str[i]+key)-90 + 64;
        }
    }
    printf("Encrypted text: ");
    printf("%s\n",encr);
    for(int i=0;encr[i]!='\0';i++) {
        if((encr[i]-key)<65) {
            decr[i] = 91 - 65-(encr[i]-key);
        }
        else {
            decr[i] = encr[i] - key;
        }
    }
    printf("Decrypted text: ");
    printf("%s\n",decr);
    return 0;
}