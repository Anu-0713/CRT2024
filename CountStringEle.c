/*These days kids are introduced to computers at a very early age. The kids are taught about alphabets, digits and blank spaces. The teacher asked the students to count the vowels, consonants, digits and white spaces in a string. The teacher found it a bit difficult to evaluate these tests and she knew that the 12th class students are learning C programming. So she assigned this task to them to count the vowels, consonants, digits and white spaces in a string. Can you please help them out? Write a program to count the vowels, consonants, digits, white spaces, and symbols in a string.

Input Format

Input consists of a string.

Constraints

Assume the maximum length of the string is 200.

Output Format

print the results

Sample Input 0

This program is very easy 2 complete
Sample Output 0

Vowels:10
Consonants:19
White Spaces:6
Digits:1
Symbols:0
Sample Input 1

Java is 2 cre@te 4r NORMAL & web apps.
Sample Output 1

Vowels:9
Consonants:16
White Spaces:8
Digits:2
Symbols:3
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[100];
    int i,vowel=0,cons=0,digit=0,sym=0,white=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
        {
             char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowel++;
        }
            else
                cons++;
         }
        else if(str[i]>=48 && str[i]<=57)
            digit++;
        else if(str[i]==32)
            white++;
        else
            sym++;
    }
    printf("Vowels:%d\nConsonants:%d\nWhite Spaces:%d\nDigits:%d\nSymbols:%d",vowel,cons,white,digit,sym);   
    return 0;
}
