/* Problem Statement:
Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x. Write divide and conquer algorithm to find floor of x.
Input Format
   First Line Contains Integer n – Size of array
   Next n lines Contains n numbers – Elements of an array
   Last Line Contains Integer x – Value for x
 
Output Format
   First Line Contains Integer – Floor value for x */

   #include<stdio.h>
   int main(){
       int n,x;
       scanf("%d",&n);
       int arr[n];
       for(int i=0;i<n;i++){
           scanf("%d",&arr[i]);
       }
       scanf("%d",&x);
       int left=0,right=n-1;
       int floor=-1;
       while(left<=right){
           int mid=left+(right-left)/2;
           if(arr[mid]==x){
               floor=arr[mid];
               break;
           }
           if(arr[mid]<x){
               floor=arr[mid];
               left=mid+1;
           }
           else{
               right=mid-1;
           }
       }
       if(floor!=-1){
           printf("%d\n",floor);
       }
       else{
           printf("no floor value found for %d in the array.\n",x);
       }
       return 0;
   }