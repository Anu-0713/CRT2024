/*Write a program to generate the following series 7, 5, 8, 6, 9….

Input Format

Read n value

Constraints

1<=n<=10^7

Output Format

Print series

Sample Input 0

5
Sample Output 0

7 5 8 6 9
Sample Input 1

10
Sample Output 1

7 5 8 6 9 7 10 8 11 9
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    int current = 7;  
    scanf("%d", &n);
 for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d ", current);
            current -= 2;
        } else {
            printf("%d ", current);
            current += 3;
        }
    }
return 0;
}

