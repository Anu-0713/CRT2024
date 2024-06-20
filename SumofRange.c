/*Write a program to print the sum of a given range of numbers

Input Format

Input consists of 2 integers. First input corresponds to the minimum value of the range. Second input corresponds to the maximum value of the range.

Constraints

1<=num1<=10^7

Output Format

The output is an integer which corresponds to the sum of range.

Sample Input 0

5
10
Sample Output 0

45
Sample Input 1

25
55
Sample Output 1

1240
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int start, end, sum = 0;
    scanf("%d", &start);
    scanf("%d", &end);
   for (int i = start; i <= end; i++) {
        sum += i;
    }
printf("%d",sum);
    return 0;
}
