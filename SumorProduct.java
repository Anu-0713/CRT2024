/*Accept two integer values from the user and return their product. If the product is greater than 1000, then return their sum

Input Format

Line 1: 1st Number value Line 2: 2nd Number value

Constraints

1<=num1<=10^7 1<=num2,=10^7

Output Format

Line 1: Result of the operation

Sample Input 0

10
20
Sample Output 0

200
Sample Input 1

40
30
Sample Output 1

70
Sample Input 2

50
20
Sample Output 2

1000
Sample Input 3

100
200
Sample Output 3

300
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        int n1=s.nextInt();
        int n2=s.nextInt();
        int p=n1*n2;
        if(p>1000)
        {
            System.out.println(n1+n2);
        }
        else if(p<=1000)
        {
            System.out.println(p);
        }
    }
}
