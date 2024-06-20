/*Write a program to find the sum of elements in each row and column and also to find the greatest sum in rows and columns.

Input Format

Read size of rows and columns Read elements for matrix

Constraints

1<=n<10^7

Output Format

Print sum of rows in first line Print highest row no in next line Print sum of columns in next line Print highest column no in next line

Sample Input 0

3
3
1 6 8
2 5 1
3 8 2
Sample Output 0

15 8 13
Row 1
6 19 11
Column 2
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

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
    int rs=0,cs=0,maxrs=0,maxcs=0;
    int maxr=0,maxc=0;
    for(i=0;i<n;i++)
    {
       int rs=0 ;
        for(j=0;j<m;j++)
        {
          rs+=a[i][j]; 
        }
                printf("%d ",rs);
    if(rs>maxrs)
       {
         maxrs=rs;
          maxr=i+1;
       }
    }
            printf("\nRow %d\n",maxr);
     for(j=0;j<m;j++)
    {
        int cs=0;   
     for(i=0;i<n;i++)
        {
          cs+=a[i][j]; 
        }
         printf("%d ",cs);
    if(cs>maxcs)
    {
     maxcs=cs;
     maxc=j+1;
    }
     }
    
   printf("\nColumn %d",maxc);
    

    return 0;
}
