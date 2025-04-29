/* Write a Program to Implement the Quick Sort Algorithm

Input Format:
The first line contains the no of elements in the list-n
The next n lines contain the elements.

Output:
Sorted list of elements */

#include<stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int low,int high){
    int p=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=p && i<=high -1) i++;
        while(arr[j]>p && i>=low+1) j--;
        if(i<j) swap(&arr[i], &arr[j]);
    }
    swap(&arr[low], &arr[j]);
    return j;
}
void quicksort(int arr[],int low, int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}