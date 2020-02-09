
/*Calculate electricity bill with units

Write a program to input electricity units and calculate the total electricity bill according to the given condition:

For first 50 units Rs. 2.50/unit
For next 100 units Rs. 2.75/unit
For next 100 units Rs. 4.20/unit
For unit above 250 Rs. 4.50/unit
An additional surcharge of 10% is added to the bill.
Input Format

Each test case contains an integer denoting the units.
Output Format

Print the total electricity bill up to 2 decimal points.
Sample Input

2050
Sample Output

9812.00*/
#include <stdio.h>
int main()
{int n;
 float a,b,sum;
 scanf("%d",&n);
 if(n<=50)
 {
   a=n*2.50;
   }
 else if(n>50 && n<=150)
 {
   a=((n-50)*2.75) + (50*2.50);
 }
 else if(n>150 && n<250)
 {
   a=(50*2.50)+(100*2.75)+((n-150)*4.20);
   }
 else if(n>250)
 {
   a=(50*2.50)+(100*2.75)+(100*4.20)+((n-250)*4.50);
 }
 b=a/10;
 sum=a+b;
 printf("%.2f",sum);
   return 0;
}
