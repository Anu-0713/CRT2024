/*Write a program to count the number of vowels in the given string.

Input Format

Read a string

Constraints

string

Output Format

print the number of Vowels.

Sample Input 0

Java language
Sample Output 0

6
Sample Input 1

python LANGUAGE
Sample Output 1

5
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    int count = 0;
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
