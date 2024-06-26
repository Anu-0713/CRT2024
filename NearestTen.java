/*Write a program to return the nearest 10 multiple of any given number

Input Format

Read a number

Constraints

1<=n<=10^7

Output Format

Print nearest 10 multiple no

Sample Input 0

18
Sample Output 0

20
Sample Input 1

134
Sample Output 1

130
Sample Input 2

155
Sample Output 2

160
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        int r=n%10;
    if(r>=5)
    {
        System.out.println(n+(10-r));
    }
    else
    {
        System.out.println(n-r);
    }
    
    }
}
