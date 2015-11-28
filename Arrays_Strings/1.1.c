#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char myString[10];
    int ascArray[10],i,j,flag=0;

    printf("Your string:\n");
    scanf("%s",&myString);

    for(i=0;i<strlen(myString);i++)
        ascArray[i] = (int)myString[i];

    for(i=0;i<strlen(myString);i++)
    for(j=i+1;j<strlen(myString);j++)
        {
          if(ascArray[i]==ascArray[j]) flag=1;
        }

    if(flag==1)
      printf("String has non-unique characters\n");
    else
      printf("String has unique characters\n");


    return 0;
}
