//flow control statements (if) 
#include<stdio.h>
int main()
{

    int a,b;
 scanf("%d %d",&a,&b);
 if(b==0)
 {
     printf("Second number cannot be zero");
     b=1;
 }
 int r=a/b;
 printf("\n%d",r);

