#include<stdio.h>
#include<string.h>
void main()
{
          char str[100],c;
          int i,count=0;

          printf("\n Enter a sentence : ");
          gets(str);

          printf("\n Enter a character to know it's repetance in sentence :");
          scanf("%c",&c);

          for(i=0;i<strlen(str);i++)
          {
                    if(str[i]==c)
                    {
                              count++;
                    }
          }
printf("\n Letter '%c' repeated = %d times ",c,count);
}
