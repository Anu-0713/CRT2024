/*Write a program to find pairs of elements whose sum is equal to the given value.

Input Format

The first line contains an integer 'N', denoting the size of the input.
The next line contains space-separated integers denoting the elements.
The last line target value

Constraints

1<=n<=10^7

Output Format

Print index values of pair otherwise print -1

Sample Input 0

5
1 3 7 4 5
7
Sample Output 0

1 3
Explanation 0

In above target value is 7
In array elements 2nd element is 3 and 4th element is 4
To add 3+4=7
That's why indexes are 1 3

Sample Input 1

6
1 8 9 11 0 2
5
Sample Output 1

-1
Explanation 1

There is no pair to reach target value 5
That's why output is -1
*/#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int n,i,j,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum;
    scanf("%d",&sum);
    for(i=0;i<=n;i++)
    {
       for(j=i+1;j<=n-1;j++)//for(j=n;j>=i;j--)
       {
           if(a[i]+a[j]==sum)
           {
            printf("%d %d",i,j);
               flag=1;
               break;
           }
       }
    }
    if(flag==0)
        {
            printf("-1");
        }
  
   return 0;
}
