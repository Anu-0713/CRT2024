/*Write a program to sort the given array in ascending order.

Input Format

Read size of the array Read elements of the array line by line

Constraints

1<=n<=10^7

Output Format

Print elements of the array in asecending order

Sample Input 0

5
54
68
25
14
74
Sample Output 0

14
25
54
68
74
Sample Input 1

4
51
-3
5
-6
Sample Output 1

-6
-3
5
51
*/
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int a[]= new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        Arrays.sort(a);
        for(int i=0;i<n;i++)
        {
           System.out.println(a[i]);
        }
    }
}
