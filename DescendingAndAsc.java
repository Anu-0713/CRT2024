//Input : n=6 arr[]={13 2 4 15 12 10}  Output : 15 13 12 2 4 10 import java.util.*;
class DescendingAndAsc
{
public static void main(String args [])
{
Scanner s= new Scanner(System.in);
 int n=s.nextInt();
             int a[]= new int[n];
       for(int i=0;i<n;i++)
          {
           a[i]=s.nextInt();
          }
            int mid ;
           if(n%2==0)
                  mid=n/2;
              else
                  mid=n/2+1;
         for(int i=0;i<n;i++)
          {
                for(int j=mid;j<n;j++)
                {
                    if(a[i]>a[j])
                  {
                      int t=a[i];
                      a[i]=a[j];
                     a[j]=t;
                   }
               }
           }
          for(int i=0;i<n;i++)
          {
                for(int j=mid;j<n;j++)
                {
                    if(a[i]<a[j])
                  {
                      int t=a[i];
                      a[i]=a[j];
                     a[j]=t;
                   }
               }
           }
        for( int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
         }
     }
}
