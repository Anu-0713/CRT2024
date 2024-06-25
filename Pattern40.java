/*
Print the pattern

Input Format

Read no of rows

Constraints

1<=n<=10^7

Output Format

print pattern

Sample Input 0

5
Sample Output 0

*****
 ****
  ***
   **
    *
Sample Input 1

10
Sample Output 1

**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
Sample Input 2

13
Sample Output 2

*************
 ************
  ***********
   **********
    *********
     ********
      *******
       ******
        *****
         ****
          ***
           **
            *
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
         int i,j,k;
    Scanner s= new Scanner(System.in);
        int n=s.nextInt();
    for(i=0;i<=n;i++)
    {
        for (j=1;j<=i;j++)
         { 
            System.out.printf(" ");
         }
        for(k=i;k<n;k++)
            {
            System.out.printf("*");
            }
        System.out.println();
      }
           
   
    }
}
