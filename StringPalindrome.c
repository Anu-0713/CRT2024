/*Write a program to find whether the given string is a palindrome or not

Input Format

Read a string

Constraints

string

Output Format

If the given string is a Palindrome display “Palindrome”, else display “Not a Palindrome”.

Sample Input 0

madam
Sample Output 0

Palindrome
Sample Input 1

java
Sample Output 1

Not a Palindrome
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str1[50],str2[50];
    int i,n,j=0;
    gets(str1);
    for(n=0;str1[n]!='\0';n++);
        for(i=n-1;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    i=strcmp(str1,str2);
    if(i==0)
    {
              printf("Palindrome");

    }
    else
  {
      printf("Not a Palindrome");
  }    
    return 0;
}

