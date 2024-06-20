/*There is a treasure full of gold and diamonds. Jack Sparrow successfully reached the cave with his black pearl. He is reading a hint on a box that he need to tilt it 90 degree clock wise. But he don't know what to tilt. Finally when he reaches the door there is a dial pad. He remember the hint in the box and he opened the box where it has numbers printed in N x N form. Now he is tilting the same to 90 degree and seeing the numbers. He couldn't see and type on same time. So write a program to print the 2D matrix which will be helpful for him to type easily.

Input Format

Read size of rows and columns Read elements of matrix

Constraints

1<=n<=10^7

Output Format

Print the matrix as described above

Sample Input 0

3
1 2 3
4 5 6
7 8 9
Sample Output 0

7 4 1 
8 5 2 
9 6 3
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
