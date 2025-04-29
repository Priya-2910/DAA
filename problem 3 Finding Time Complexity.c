/* Convert the following algorithm into a program and find its time complexity using counter method.
 Factor(num) {
 {
    for (i = 1; i <= num;++i)
    {
     if (num % i== 0)
        {
          printf("%d ", i);
        }        
     } 
  }
 
 
Note: No need of counter increment for declarations and scanf() and counter variable printf() statement.

Input:
 A positive Integer n
Output:
Print the value of the counter variable */

#include<stdio.h>
void fac(int num){
    int c=0;
    for (int i=1;i<=num;i++){
        c++;
        if(num%i==0){
            c++;
        }c++;
    }c++;
    printf("%d",c);
}
int main(){
    int num;
    scanf("%d",&num);
    fac(num);
}
