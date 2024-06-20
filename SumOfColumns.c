/*Write a program to find the sum of elements in each column.

Input Format

Read size of rows and columns Read elements of the array

Constraints

1<=n<=10^7

Output Format

Print sum of each column in seperate line

Sample Input 0

3
3
3 5 1
7 3 2
0 54 2
Sample Output 0

10
62
5
Sample Input 1

3
4
1 2 3 4
5 6 7 8
9 0 3 5
Sample Output 1

15
8
13
17
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
    for(j=0;j<m;j++)
    {
        int s=0;
        for(i=0;i<n;i++)
        {
          s+=a[i][j]; 
        }
                printf("%d\n",s);

    }
    
    return 0;
}
