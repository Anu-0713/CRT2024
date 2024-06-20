/*Write a program to display all the Prime Numbers between a given range of numbers.

Input Format

Line 1: Line 2:

Constraints

1<=n<=10^7

Output Format

Sample Input 0

25
50
Sample Output 0

29 31 37 41 43 47
Sample Input 1

100
200
Sample Output 1

101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        int start, end, i, j, isPrime;
    scanf("%d", &start);
    scanf("%d", &end);
    for (i = start; i <= end; i++) {
        if (i < 2) {
            continue;
        }
                isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                  break;
            }
        }
                if (isPrime == 1) {
            printf("%d ", i);
                }
    }

    return 0;
}
