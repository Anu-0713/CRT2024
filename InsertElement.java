/*Write a program to insert an element in an array at the given position. If the position where the element is to be inserted is greater than the size of the array display “Invalid Input”.

Input Format

The first integer corresponds to the size of the array. Read n elements into an array line by line Next integer corresponds to the position where the element is to be inserted. Next integer corresponds to the element to be inserted.

Constraints

1<=n<=10^7

Output Format

Print array after insertion

Sample Input 0

5
1
2
3
4
5
4
10
Sample Output 0

1
2
3
10
4
5
Sample Input 1

4
12
55
24
65
8
22
Sample Output 1

Invalid Input
Sample Input 2

6
23
55
12
87
44
22
3
99
Sample Output 2

23
55
99
12
87
44
22
*/
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
    Scanner s= new Scanner(System.in);
    int n= s.nextInt();
    int a[] = new int[n+1];
    for(int i=0;i<n;i++)
    {
        a[i]=s.nextInt();
    }
    int pos=s.nextInt();
    int val=s.nextInt();
    if(pos>n)
    {
              System.out.println("Invalid Input");
    }
    else
    {
     for(int i=n;i>=pos;i--)
      {
        a[i]=a[i-1];
      }
    a[pos-1]=val;
    for(int i=0;i<n+1;i++)
    {
        System.out.println(a[i]);
    }
    }

    }
}
