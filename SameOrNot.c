/*Write a program to find whether the two arrays are the same or not. Two arrays are said to be the same if the elements of both the arrays is the same and the size of arrays is the same.

Input Format

First number represents the size of first array Second number represents the size of second array Read elements of the first array side based on First number Read elements of the second array side based on Second number

Constraints

1<=n<=10^7

Output Format

If two arrays are same, display "Same" else display "Not Same"

Sample Input 0

3
3
1 2 3
1 2 3
Sample Output 0

Same
Sample Input 1

3
3
1 2 1
2 3 6
Sample Output 1

Not Same
Sample Input 2

3
4
1 2 3
1 2 3 4
Sample Output 2

Not Same
Sample Input 3

5
5
22 11 33 44 55
22 11 33 55 44
Sample Output 3

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n1,n2;
    scanf("%d%d",&n1,&n2);
    int a[n1],b[n2];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    if(n1!=n2)
    {
        printf("Not Same");
    }
    else
    {
        for(i=0;i<n1;i++)
        {
            if(a[i]!=b[i])
            {
                printf("Not Same");
                break;
            }
        }
        if(i==n1)
            printf("Same");
    }
    
        
    return 0;
}
