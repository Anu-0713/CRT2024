/*Print the pattern

Input Format

Read no of rows

Constraints

1<=n<=10^7

Output Format

print pattern

Sample Input 0

5
Sample Output 0

*****
 ****
  ***
   **
    *
Sample Input 1

10
Sample Output 1

**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
Sample Input 2

13
Sample Output 2

*************
 ************
  ***********
   **********
    *********
     ********
      *******
       ******
        *****
         ****
          ***
           **
            *
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for (j=1;j<=i;j++)
         { 
            printf(" ");
         }
        for(k=i;k<n;k++)
            {
            printf("*");
            }
        printf("\n");
      }
           
    return 0;
}
