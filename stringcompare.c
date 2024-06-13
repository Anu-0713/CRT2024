/*t consists of 2 strings.

Constraints

string

Output Format

If two strings are same, display “Strings are same”, else display “Strings are not same”.

Sample Input 0

java
java
Sample Output 0

Strings are same
Sample Input 1

python
Java
Sample Output 1

Strings are not same
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char str1[50],str2[50];
   scanf("%s",str1);
    scanf("%s",str2);
    int i=strcmp(str1,str2);
    if(i==0)
    {

        printf("Strings are same");
    }
    else{
        printf("Strings are not same");
    }        
    return 0;
}
