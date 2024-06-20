/*Write a program for Matrix Addition

Input Format

Enter row size Enter column size Enter elements for first matrix line by line Enter elements for second matrix line by line

Constraints

1<=n<=10^7

Output Format

Addition of a matrix

Sample Input 0

2
2
1
2
3
4
1
2
3
4
Sample Output 0

2 4
6 8
Sample Input 1

2
3
1
2
3
4
5
6
6
5
4
3
2
1
Sample Output 1

7 7 7
7 7 7
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m],c[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        { 
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
