/* Convert the following algorithm into a program and find its time complexity using counter method.

void reverse(int n)
{
   int rev = 0, remainder;
   while (n != 0) 
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n/= 10;
        
    }
print(rev);
}
 
Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.

Input:
 A positive Integer n
Output:
Print the value of the counter variable */

#include<stdio.h>
void reverse(int n)
{
   int rev = 0, remainder;
   int c=0;
   c+=2;
   while (n != 0) 
    {
        c++;
        remainder = n % 10;
        c++;
        rev = rev * 10 + remainder;
        c++;
        n/= 10;
        c++;
        
    }c++;
printf("%d",c);
}
int main(){
    int n;
    scanf("%d",&n);
    reverse(n);
}