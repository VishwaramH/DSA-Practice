// inputting 5 strings and sorting them in lexicographical(dictionary) order
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[5][40],temp[40]; // 5 strings having size of 40 each
    printf("Enter the 5 strings:\n");
    for(i=0;i<5;i++){
        fgets(str[i],sizeof(str[i]),stdin);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("After sorting the strings in lexicographical order:\n");
    for(i=0;i<5;i++){
        fputs(str[i],stdout);
    }
    return 0;
}