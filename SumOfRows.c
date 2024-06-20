/*Write a program to find the sum of elements in each row.

Input Format

Integers correspond to the size of rows and columns. Read elements of the array

Constraints

1<=n<=10^7

Output Format

Sum of each row in seperate line

Sample Input 0

3
3
1 2 3
7 3 1
7 4 1
Sample Output 0

6
11
12
Sample Input 1

4
3
1 2 3
4 5 6
7 8 9
4 3 8
Sample Output 1

6
15
24
15
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=0;j<m;j++)
        {
          s+=a[i][j]; 
        }
                printf("%d\n",s);

    }
    return 0;
}
