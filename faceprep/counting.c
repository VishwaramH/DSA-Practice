#include<stdio.h>
#include<string.h>
int main()
{
  char str[201];
  int vow=0,cons=0,space=0,dig=0,sym=0;
  printf("Enter a string:\n");
  scanf("%[^\n]s",str);
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
      vow++;
    }
    else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
      cons++;
    }
    else if(str[i]==' '){
      space++;
    }
    else if(str[i]>='0' && str[i]<='9'){
      dig++;
    }
    else{
      sym++;
    }
  }
  printf("Vowels:%d\n",vow);
  printf("Consonants:%d\n",cons);
  printf("White Spaces:%d\n",space);
  printf("Digits:%d\n",dig);
  printf("Symbols:%d\n",sym);
  return 0;
}