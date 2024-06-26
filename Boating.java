/*You went on a tour to Ooty with your friends. As a part of the tour, you went boating with them. For the boat to remain stable, the number of people on one boat is restricted based on the weight of the people. You find that the boatman who is sailing your boat is so much greedy of money. For earning more, he takes too many people to travel in the boat at a time. So you want to check how many people can travel in the boat at a time so that the boat will not drown. Calculate the weight by considering the number of adults and number of children. Assume that an adult weighs 75 kg and children weigh 30 kg each. If the weight is normal, display Boat is stable, else display Boat will drown.

Input Format

Input consists of 3 integers. First input corresponds to the weight that the boat can handle. Second input corresponds to the number of adults. Third input corresponds to the number of children.

Constraints

1<=n<=10^7

Output Format

Print Boat is stable or Boat will drown

Sample Input 0

600
7
4
Sample Output 0

Boat will drown
Sample Input 1

800
5
4
Sample Output 1

Boat is stable
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        int b=s.nextInt();
        int a=s.nextInt();
        int c=s.nextInt();
        int aw=75;
        int cw=30;
    int tw=(a*aw)+(c*cw);
    if(tw>b)
    {
       System.out.println("Boat will drown");
    }
    else
    {
       System.out.println("Boat is stable");
    }    }
}
