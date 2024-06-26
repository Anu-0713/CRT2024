/*Write a Python program to find the sum of the series 2 +22 + 222 + 2222 + .. n terms

Input Format

Line 1:

Constraints

1<=n<=10^7

Output Format

Sample Input 0

5
Sample Output 0

24690
Sample Input 1

7
Sample Output 1

2469134
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n, i;
    long long currentTerm = 0, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        currentTerm = currentTerm * 10 + 2;
        sum += currentTerm;
    }
    printf("%lld\n", sum);
   return 0;
}
