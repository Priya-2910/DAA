/* Given two arrays array_One[] and array_Two[] of same size N. We need to first rearrange the arrays such that the sum of the product of pairs( 1 element from each) is minimum. That is SUM (A[i] * B[i]) for all i is minimum. */

#include<stdio.h>
#include<stdlib.h>
int compare_asc(const void*a,const void*b){
    return(*(int*)a-*(int*)b);
}
int compare_desc(const void*a,const void*b){
    return(*(int*)b-*(int*)a);
}
int main(){
    int n;
    scanf("%d",&n);
    int*array_one=malloc(n*sizeof(int));
    int*array_two=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&array_one[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&array_two[i]);
    }
    qsort(array_one,n,sizeof(int),compare_asc);
    qsort(array_two,n,sizeof(int),compare_desc);
    int min_sum=0;
    for(int i=0;i<n;i++){
        min_sum+=array_one[i]*array_two[i];
    }
    printf("%d\n",min_sum);
    free(array_one);
    free(array_two);
    return 0;
}