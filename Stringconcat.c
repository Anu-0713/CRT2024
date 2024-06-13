/*Write a program to find the concatenation of the given two strings

Input Format

Input consists of 2 strings.

Constraints

string

Output Format

print result string

Sample Input 0

Sun
Microsystems
Sample Output 0

Sun Microsystems
Sample Input 1

Oracle
Corporation
Sample Output 1

Oracle Corporation*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        char str1[50],str2[50],str3[100];
    int i,j;
  scanf("%s",str1);
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    str3[i]=' ';
    for(j=0;str2[j]!=0;j++)
    {
        str3[i+j+1]=str2[j];
    }
    str3[i+j+1]='\0';
    printf("%s",str3);
    return 0;
}
