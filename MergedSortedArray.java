/*You are given two integer arrays arr1 and arr2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in arr1 and arr2 respectively.
Merge arr1 and arr2 into a single array sorted in non-decreasing order
Example:
Input :
6
0 1 2 3 4 7
3
2 5 6
Output:
0 1 2 2 3 4 5 6 7
*/
import java.util.*;
 class MergedSortedArray
{
   public static void main(String args[])
   {
       Scanner s= new Scanner (System.in);
      int n1=s.nextInt();
      int a[] = new int[n1];
   int i,j,k;
      for ( i=0;i<n1;i++)
      {
        a[i]=s.nextInt();
    }
   int n2=s.nextInt();
      int b[] = new int[n2];
      for ( i=0;i<n2;i++)
      {
        b[i]=s.nextInt();
    }
   /*  int n3=n1+n2;
    int c[] = new int[n3];//int c[] =new int[n1+n2];
    //int k=0;
     for(int i=0;i<n1;i++)
     {
        c[i]=a[i];//c[k]=a[i];
       //k++;
      }
    for(int i=0;i<n2;i++)
   {
            c[n1 + i] = b[i];//c[k]=b[i];
             //k++;
    }
    Arrays.sort(c);
   */
  int c[] =new int[n1+n2];
  i=0;
   j=0;
   k=0;
   while(i<n1 && j<n2)
    {
        if(a[i] <b[j])
         {
            c[k]=a[i];
            i++;
            k++;
           }
       else
       {
        c[k]=b[j];
         j++;
        k++;
        }
}
    while(i<n1)
     {
       c[k]=a[i];
        i++;
        k++;
      }
     while(j<n2)
      {
        c[k]=b[j];
        j++;
        k++;
      }
    for( i=0;i<k;i++)//for(int i=0;i<n3;i++)
{
System.out.print(c[i]+" ");
}
}
}
