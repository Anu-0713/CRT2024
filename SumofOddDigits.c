/*An e-commerce company plans to give their customers a discount for the New Years holiday. The discount will be calculated on the basis of the bill amount of the order placed. The discount amount is the sum of all the odd digits on the customer’s total bill amount. If no odd digit is present in the bill amount, then the discount will be zero. Write an algorithm to find a discount for the given total bill amount.

Input Format

The input consists of an integer bill amount, representing the customer’s total bill amount.

Constraints

0

Output Format

Print an integer representing the discount for the given total bill amount.

Sample Input 0

2514795
Sample Output 0

27
Sample Input 1

234
Sample Output 1

3
Sample Input 2

246824
Sample Output 2

0
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        int billAmount, discount = 0,temp;
             scanf("%d", &billAmount);
    temp = billAmount;
        while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            discount += digit;
}
                    temp /= 10;
        }
printf("%d",discount);
    
    return 0;
}
