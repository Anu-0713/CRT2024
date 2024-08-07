/*Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse doesn’t move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight. You are given q queries in the form of x ,y and ,z representing the respective positions for cats A and B and for mouse C . Complete the function catAndMouse to return the appropriate answer to each query, which will be printed on a new line.

If cat A catches the mouse first, print Cat A. If cat B catches the mouse first, print Cat B. If both cats reach the mouse at the same time, print Mouse Cas the two cats fight and mouse escapes. For example, cat A is at position x=2 and cat B is at y=5 . If mouse C is at position z=4,It is 2 units from cat A and 1 unit from cat B. Cat B will catch the mouse.

Function Description Complete the catAndMouse function in the editor below. It should return one of the three strings as described.

catAndMouse has the following parameter(s): x: an integer, Cat A‘s position y: an integer, Cat B’s position z: an integer, Mouse C‘s position

Input Format

The first line contains a single integer q, denoting the number of queries. Each of the q subsequent lines contains three space-separated integers describing the respective values of x (catA ‘s location) ,y (catB ‘s location), and z (mouse C’s location).

Constraints

1<=n<=10^7

Output Format

For each query, return Cat A if cat A catches the mouse first, Cat B if cat B catches the mouse first, or Mouse C if the mouse escapes.

Sample Input 0

2
1 2 3
1 3 2
Sample Output 0

Cat B
Mouse C
Sample Input 1

3
2 8 3
6 2 4
7 1 5
Sample Output 1

Cat A
Mouse C
Cat A
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
       static void catAndMouse( int x , int y , int z )
   {
      int d1,d2;
      d1=z-x;
      d2=z-y;
       if(d1<0)
      {
        d1=-d1;
       }
       if(d2<0)
       {
        d2=-d2;
        }
       if (d1==d2)
       {
     System.out.printf("Mouse C\n");
       }
      else
       {
        if(d1<d2)
       {
       System.out.printf("Cat A\n");
       }
       else
      {
        System.out.printf("Cat B\n");
      }    
       
   }
}

    public static void main(String[] args)
    {
    Scanner s= new Scanner (System.in);
     int q=s.nextInt();   
    while(q>0)
    {
        int x=s.nextInt();
        int y=s.nextInt();
        int z=s.nextInt();
        catAndMouse(x,y,z);
        q--;
    }

    }
}
