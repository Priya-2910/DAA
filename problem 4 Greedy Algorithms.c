/* Given an array of N integer, we have to maximize the sum of arr[i] * i, where i is the index of the element (i = 0, 1, 2, ..., N).Write an algorithm based on Greedy technique with a Complexity O(nlogn).
Input Format:
First line specifies the number of elements-n
The next n lines contain the array elements.
Output Format:
Maximum Array Sum to be printed.
Sample Input:
5
2 5 3 4 0
Sample output:
40 */

#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b){
    return(*(int*)a-*(int*)b);
}
int main(){
    int n;
    scanf("%d",&n);
    int*arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i]*i;
    }
    printf("%d",sum);
    free(arr);
    return 0;
}