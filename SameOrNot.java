/*Write a program to find whether the two arrays are the same or not. Two arrays are said to be the same if the elements of both the arrays is the same and the size of arrays is the same.

Input Format

First number represents the size of first array Second number represents the size of second array Read elements of the first array side based on First number Read elements of the second array side based on Second number

Constraints

1<=n<=10^7

Output Format

If two arrays are same, display "Same" else display "Not Same"

Sample Input 0

3
3
1 2 3
1 2 3
Sample Output 0

Same
Sample Input 1

3
3
1 2 1
2 3 6
Sample Output 1

Not Same
Sample Input 2

3
4
1 2 3
1 2 3 4
Sample Output 2

Not Same
Sample Input 3

5
5
22 11 33 44 55
22 11 33 55 44
Sample Output 3

*/
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1= sc.nextInt();
        int n2= sc.nextInt();
        int a[]=new int[n1];
        int b[]=new int [n2];
        int i;
        for( i=0;i<n1;i++)
        {
            a[i]=sc.nextInt();
        }
        for( i=0;i<n2;i++)
        {
         b[i]=sc.nextInt();
        }
        if(n1!=n2)
        {
            System.out.println("Not Same");
        }
        else
        {
       for( i=0;i<n1;i++)
        {
            if(a[i]!=b[i])
            {
                System.out.printf("Not Same");
                break;
            }
        }
        if(i==n1)
            System.out.printf("Same");    
        }
        
    }
    
}
