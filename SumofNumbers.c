/*Write a program to print the sum of the given numbers. The values must be scanned until the user enters -1 as value.

Input Format

Input consists of a list of integers.

Constraints

1<=n<=10^7

Output Format

The output consists of the sum of the given integers.

Sample Input 0

1
2
3
4
-1
Sample Output 0

10
Sample Input 1

5
8
3
4
6
2
-1
Sample Output 1

28
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);
    while (num != -1) {
        sum = sum+ num;
       scanf("%d", &num); 
    }
    printf("%d\n", sum);

    return 0;
}

