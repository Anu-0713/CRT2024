/*Write a program to get a float value from the user and display it in the below-mentioned format. HINT: Use ceil() and floor() functions.

Input Format

Input consists of one float value.

Constraints

1<=n<10^7

Output Format

Output consists of one integer, its highest round off value and its lowest round off value.

Sample Input 0

54.5
Sample Output 0

54
55.0
54.0
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a;
    scanf("%f",&a);
    float h= ceil(a);
    float l = floor(a);
    printf("%1.f\n%.1f\n%.1f",a,h,l);

    return 0;
}
