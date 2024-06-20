/*Write a program to change the given string to uppercase.

Input Format

Input consists of 1 string.

Constraints

string

Output Format

Output print the Uppercase of given string.

Sample Input 0

good
Sample Output 0

GOOD
Sample Input 1

Java Language
Sample Output 1

JAVA LANGUAGE
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char str1[50];
    int i;
  // scanf("%[^/n]s",str1);
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
                
    if(str1[i]>=97 && str1[i]<=122)
        {
            str1[i]=str1[i]-32;

        }
                printf("%s",str1);

           
    return 0;
}

