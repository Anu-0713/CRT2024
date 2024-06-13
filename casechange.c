#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char str1[50];
    int i;
   scanf("%[^/n]s",str1);
   // gets(str1);
    for(i=0;str1[i]!='\0';i++)
    if(str1[i]>=65 && str1[i]<=90)
    {
        str1[i]=str1[i]+32;
      
    }
                
    else if(str1[i]>=97 && str1[i]<=122)
        {
            str1[i]=str1[i]-32;

        }
                printf("%s",str1);

           
    return 0;
}
