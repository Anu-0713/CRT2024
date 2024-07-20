//Input : 10  ,  a[]= { 11 14 16 10  9  8  24  5  4 3  }     Output: -4
import java.util.*;
class DifferenceOfDigits
{
public static int DifferenceOfDigits(int a[] , int n)
{
      int f1=0,f2=0,f=0,x=0,sum=0;
      for(int i=0 ; i< n ;i++)
      {
            int m=a[i]%10;
            int p =a[i]/10;
            sum=sum+m+p;
      }
      for(int i=0 ; i< n ;i++)
      {
            x=x+a[i];
      }
     f1=sum%10;
     f2=x%10;
     f=f1-f2;
     return f;
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
    System.out.print(SumOfDigits(a,n));
}
}
