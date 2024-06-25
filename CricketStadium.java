/*There was a large ground in center of the city which is rectangular in shape. The Corporation decides to build a Cricket stadium in the area for school and college students, But the area was used as a car parking zone. In order to protect the land from using as an unauthorized parking zone , the corporation wanted to protect the stadium by building a fence. In order to help the workers to build a fence, they planned to place a thick rope around the ground. They wanted to buy only the exact length of the rope that is needed. They also wanted to cover the entire ground with a carpet during rainy season. They wanted to buy only the exact quantity of carpet that is needed. They requested your help. Can you please help them by writing a program to find the exact length of the rope and the exact quantity of carpet that is required?

Input Format

Input consists of 2 integers. The first integer corresponds to the length of the ground and the second integer corresponds to the breadth of the ground.

Constraints

1<=n<=10^7

Output Format

Output Consists of two integers. The first integer corresponds to the perimeter. The second integer corresponds to the quantity of carpet required.

Sample Input 0

50
20
Sample Output 0

140
1000
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
       Scanner s = new Scanner (System.in);
       int l = s.nextInt();
       int b = s.nextInt();
        System.out.println(2*(l+b));
         System.out.println(l*b);
    }
}
