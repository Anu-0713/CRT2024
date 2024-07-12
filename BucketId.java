//Input:n=4 arr[]={43 345 20 987}  Output:7 12 2 24
  import java.util.*;
class BucketId {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        int a[] = new int[n];
        for( int i=0;i<n; i++)
        {
            a[i]=s.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            int sum=0;
           if(a[i]<100)
            {
                int p= a[i]%10;
                int q= a[i]/10;
                sum=p+q;
            System.out.print( sum +" ");
           }
          else if(a[i]>=100 && a[i]<=999)
            {
                int p= a[i]%100;
                int q= a[i]/100;
                int r=p%10;
                int s=p/10;
                sum=q+r+s;
            System.out.print( sum +" ");
           }
        }
    }
}
