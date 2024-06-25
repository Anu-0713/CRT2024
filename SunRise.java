/* Read a given array and where array elements are the heights of buildings of buildings check how many buildings can view the sunrise if the sunrise starts from first element of array
   Input 1:
   5
  6 2 7 4 10
   Output 1:
   3
   Input 2:
   4
   1 2 3 4 
  Output 2:
   4
  */
import java.util.*;
class SunRise
{
 public static void main(String args[])
  {
   int count=0;
    Scanner s= new Scanner(System.in);
   int m= s.nextInt();
   int a[] =new int[m];
   for(int i=0;i<m;i++)
   {
    a[i]=s.nextInt();
   }
 for(int i=0;i<m;i++)
  {
        if(a[i]>=a[0])
        {
          count++;
        }
}
System.out.println(count);
  }
}
