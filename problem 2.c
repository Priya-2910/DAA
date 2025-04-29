/* Find Duplicate in Array.
Given a read only array of n integers between 1 and n, find one number that repeats.
Input Format:
First Line - Number of elements
n Lines - n Elements
Output Format:
Element x - That is repeated */

#include <stdio.h>
#define max 100
int main() {
    int arr[max]={0};
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        arr[a[i]]++;
    }
    for ( int i=0;i<max;i++){
        if(arr[i]>1){
            printf("%d",i);
        }
    }
    return 0;
}
