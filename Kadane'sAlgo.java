/* - Kadane's Algorithm is a dynamic programming approach used to solve the maximum subarray problem, which involves finding the contiguous   subarray with maximum sum in an array of numbers.
  - The algorithm is proposed by Jay Kadane in 1984 and has a time complexity of O(n).
  Input : n=9 arr={-2 ,1 ,-3 ,4 ,-1, 2, 1 ,-5 ,4} Output:6
*/
import java.util.*;
class KadaneSubArray
{
  public static void main(String [] args)
   {
      Scanner sc= new Scanner (System.in);
      int n= sc.nextInt();
      int a[] = new int[n];
     for( int i=0;i<n;i++)
       {
        a[i]=sc.nextInt();
        }
     int globalsum=a[0],currentsum=0;
   for(int i=0;i<n;i++)
     {
          currentsum=currentsum+a[i];
         if(globalsum<currentsum)
         globalsum=currentsum;
       if (currentsum<0)//Since negative numbers cannot produce highest sum value we ignore those by making cs as 0
         currentsum=0;
      }
     System.out.println(globalsum);
       }
  }
