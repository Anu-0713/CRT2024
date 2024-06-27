/*Given an array, sort its first half of the elements.If the array length is odd, then consider middle element in the first half of array.
Sample Input 1:
5
5 4 3 2 1 
Sample Output 1:
3 4 5 2 1 
Sample Input 2:
4
5 4 3 2
Sample Output 2:
4 5 3 2
*/

import java.util.*;
class SortFirstHalf
{ 
       static void bubbleSort(int a[] , int n)
    {
          int mid ;
           if(n%2==0)
               {
                  mid=n/2;
                }
              else
                {
                  mid=n/2+1;
                  }
         for(int i=0;i<mid-1;i++)
          {
                for(int j=i+1;j<mid;j++)
                {
                    if(a[i]>a[j])
                  {
                      int t=a[i];
                      a[i]=a[j];
                     a[j]=t;
                   }
               }
           }   
}
         public static void main(String args[])
        {
             Scanner s=new Scanner(System.in);
             int n=s.nextInt();
             int a[]= new int[n];
       for(int i=0;i<n;i++)
          {
           a[i]=s.nextInt();
          }
     bubbleSort(a,n);
     for( int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
         }
    }
}


    
