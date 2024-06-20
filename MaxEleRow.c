/*Write a program to find the element of maximum value in each row.

Input Format

The first input corresponds to the number of rows. The second input corresponds to the number of columns. The third input corresponds to the elements of the 2D array.

Constraints

1<=n<=10^7

Output Format

The output corresponds to the maximum element in each row.

Sample Input 0

3
3
1 4 9
3 5 1
2 8 5
Sample Output 0

9
5
8
Sample Input 1

4
3
8 1 7
3 4 5
6 9 3
2 2 2
Sample Output 1

8
5
9
2
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,n,m;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        int max=a[i][0];
        for(j=1;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
        printf("%d\n",max);
    }
    
    
    return 0;
}
