/*Write a program to sum of even and odd elements in an array.

Input Format

Integer corresponds to the size of the array. Read n elements line by line

Constraints

1<=n<=10^7

Output Format

Print Odd sum Print Even sum

Sample Input 0

3
31
28
13
Sample Output 0

44
28
Sample Input 1

6
12
100
28
31
22
45
Sample Output 1

76
162
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int sume=0,sumo=0;
   for(i=0;i<n;i++)
   {
        if(a[i]%2 !=0)
        {
            sumo=sumo+a[i];
        }
        else
        {
           sume=sume+a[i];
          
        }
       
   }
   printf("%d\n",sumo);
   printf("%d\n",sume);
    return 0;
}
