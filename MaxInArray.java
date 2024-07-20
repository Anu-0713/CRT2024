//Input : n= 10 , a[]= { 23 45 82 27 66 12 78 13 71 86 }         output:  86  9
import java.util.*;
class MaxInArray
{
public static void MaxInArray(int a[] , int n)
{
    int max=a[0],r=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]>max)
        {
           max=a[i];
            r=i;
        }
     }
     System.out.println(max);
     System.out.println(r);
}
public static void main(String [] args)
{
    Scanner s=new Scanner(System.in);
    int n=s.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    {
      a[i]=s.nextInt();
     }
     MaxInArray(a,n);
}
}
