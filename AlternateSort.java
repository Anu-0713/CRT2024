/*Given an array of integers print the array in such a way that the first element is first maximum and second element is first minimum and so on.
Sample Input:
5
5 1 4 7 9
Sample Output:
9 1 7 4 5
*/
import java.util.*;
class AlternateSort
{
    public static void main(String args[])
      {
          Scanner s= new Scanner(System.in);
          int n = s.nextInt();
          int a[] = new int[n];
        
       for(int i=0;i<n;i++)
        {
          a[i]=s.nextInt();
         }
    for(int i=0;i<n-1;i++)
    {
     for(int j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
    {
       int  t=a[i];
       a[i]=a[j];
      a[j]=t;
      }
      }
 }
int i;
    for( i=0;i<n/2;i++)
{
   System.out.print(a[n-i-1]+" "+a[i]+" ");
  }
if(n%2==1)
{
     System.out.print(a[i]);
}
}    
}
