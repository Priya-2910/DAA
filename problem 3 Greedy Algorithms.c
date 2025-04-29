/* A person needs to eat burgers. Each burger contains a count of calorie. After eating the burger, the person needs to run a distance to burn out his calories. 
 If he has eaten i burgers with c calories each, then he has to run at least 3i * c  kilometers to burn out the calories. For  example, if he ate 3
 burgers with the count of calorie in the order: [1, 3, 2], the kilometers he needs to run are (30 * 1) + (31 * 3) + (32 * 2) = 1 + 9 + 18 = 28.
 But this is not the minimum, so need to try out other orders of consumption and choose the minimum value. Determine the minimum distance
 he needs to run. Note: He can eat burger in any order and use an efficient sorting algorithm.Apply greedy approach to solve the problem.
Input Format
First Line contains the number of burgers
Second line contains calories of each burger which is n space-separate integers 
Output Format
Print: Minimum number of kilometers needed to run to burn out the calories
Sample Input
3
5 10 7
Sample Output
76 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int compare(const void*a,const void*b){
    return(*(int*)b-*(int*)a);
}
int main(){
    int n;
    scanf("%d",&n);
    int burgers[n];
    for(int i=0;i<n;i++){
        scanf("%d",&burgers[i]);
    }
    qsort(burgers,n,sizeof(int),compare);
    int min_distance=0;
    for(int i=0;i<n;i++)
    min_distance+=burgers[i]*pow(n,i);
    printf("%d\n",min_distance);
    return 0;
}