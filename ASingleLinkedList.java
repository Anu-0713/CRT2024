//Create ascending ordered linked list  create , print , exit
import java.util.*;
  class Node 
   {
      int data ;
      Node next;
      Node(int x)
       {
        data=x;
        next =null;
       }
   }
class  SingleList
  {
          Node head,tail;
          SingleList()
          {
            head=tail=null;
           }
         void create(int x)
         {
            Node n=new Node(x);
            if(head==null)
            {
               head=tail=n;
             }
            else if(x<head.data)
              {
               n.next=head;
               head=n;
               }
            else
            {
           Node temp=head; 
           while( temp.next!=null )
             { 
                   if(x<temp.next.data)
                        {
                              break;
                        }
               else
                 temp=temp.next;
             }
            if(temp.next==null)
               {  temp.next=n;
                   tail=n;
               }
           else
             {
             n.next=temp.next;
             temp.next=n;
             }
           }
         }
         void display()
         {
            if(head==null)
             {
                System.out.println("List is empty");
                return;
              }
             Node temp=head;
             while(temp!=null)
             {
               System.out.print(temp.data+"  ");
               temp=temp.next;
            }
        }
   }
 class  ASingleLinkedList
  {
     public static void main(String args[ ])
      {
          Scanner s= new Scanner(System.in);
          SingleList s1= new SingleList();
          for(;;)
          {
              System.out.println();
              System.out.println("1.Create\n2.Print\n3.Exit");
              System.out.println("Enter your choice:");
              int ch=s.nextInt();
              if(ch==1)
              {
                 int x;
                System.out.println("Enter the element:");
                x=s.nextInt();
                s1.create(x);
              }
            else if(ch==2)
            {
                      s1.display();
            }
         else  if(ch==3)
            {
               break;
            }
        }
    }
}