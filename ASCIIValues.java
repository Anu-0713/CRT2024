/*Write a program to find whether a given character is an uppercase, lowercase, number or symbol. If it is an alphabet find whether it is an Uppercase or Lowercase. If it is a number display Number else display Symbol.

Input Format

Input consists of 1 character

Constraints

1<=ch<=65535

Output Format

Print Upper if upper case letter Print Lower if lower case letter Print Number if number Print Symbol if symbol

Sample Input 0

A
Sample Output 0

Upper
Sample Input 1

d
Sample Output 1

Lower
Sample Input 2

8
Sample Output 2

Number
Sample Input 3

$
Sample Output 3

Symbol
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s =new Scanner(System.in);
        char m=s.next().charAt(0);
   
        if(m>=65 && m<=90)
           System.out.printf("Upper");
        else if (m>=97 && m<=122)
         System.out.printf("Lower");
         else if(m>=48 && m<=57)
        System.out.printf("Number");
        else
      System.out.printf("Symbol");
    }
}
