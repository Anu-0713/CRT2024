/*Print the pattern

Input Format

Read n value

Constraints

1<=n<=10^7

Output Format

print the pattern

Sample Input 0

10
Sample Output 0

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * * 
* * * * * * * * * * 
* * * 
* * * 
* * * 
* * * 
* * * 
* * * 
* * * 
* * * 
* * * 
Sample Input 1

15
Sample Output 1

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * * 
* * * * * * * * * * * * 
* * * * * * * * * * * * * 
* * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            {
            printf("* ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n/3;j++)
        {
            {
                 printf("* ");
            }
        }
      printf("\n");
    }
    return 0;
    
}
