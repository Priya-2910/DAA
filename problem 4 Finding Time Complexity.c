/* Convert the following algorithm into a program and find its time
complexity using counter method.
            
void function(int n)
{
    int c= 0;
    for(int i=n/2; i<n; i++)
        for(int j=1; j<n; j = 2 * j)
            for(int k=1; k<n; k = k * 2)
                c++;
}
 
Note: No need of counter increment for declarations and scanf() and  count variable printf() statements.

Input:
 A positive Integer n
Output:
Print the value of the counter variable */

#include<stdio.h>
void function(int n)
{
    int p= 0;
    p++;
    int c=0;
    for(int i=n/2; i<n; i++){
        p++;
        for(int j=1; j<n; j = 2 * j){
            p++;
            for(int k=1; k<n; k = k * 2){
                p++;
                c++;
                p++;
            }p++;
        }p++;
    }p++;
    printf("%d",p);
    
}
int main(){
    int n;
    scanf("%d",&n);
    function(n);
}