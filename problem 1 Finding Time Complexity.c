/* Convert the following algorithm into a program and find its time complexity using the counter method.
void function (int n)
{
    int i= 1;
    int s =1;
    while(s <= n)
    {
         i++;
         s += i;
     }      
}     
Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.

Input:
 A positive Integer n
Output:
Print the value of the counter variable */

#include<stdio.h>
void function(int n);
int count=0;
int main()
{
    int n;
    scanf("%d",&n);
    function(n);
    return 0;
    
}
void function (int n)
{
    int i= 1;
    count++;
    int s =1;
    count++;
    while(s <= n)
    {
         count++;
         i++;
         count++;
         s += i;
         count++;
     }  
     count++;
     printf("%d",count);
}     