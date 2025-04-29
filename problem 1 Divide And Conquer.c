/* Problem Statement
Given an array of 1s and 0s this has all 1s first followed by all 0s. Aim is to find the number of 0s. Write a program using Divide and Conquer to Count the number of zeroes in the given array.
Input Format
   First Line Contains Integer m – Size of array
   Next m lines Contains m numbers – Elements of an array
Output Format
   First Line Contains Integer – Number of zeroes present in the given array. */

   #include<stdio.h>
   int main(){
       int m,i;
       scanf("%d",&m);
       int arr[m];
       for(i=0;i<m;i++){
           scanf("%d",&arr[i]);
       }
       int low=0,high=m-1,mid,firstZeroIndex=-1;
       while(low<=high){
           mid=low+(high-low)/2;
           if((mid==0||arr[mid-1]==1)&&arr[mid]==0){
               firstZeroIndex=mid;
               break;
           }
           if(arr[mid]==1){
               low=mid+1;
           } else{high=mid-1;
           }
       }
       if(firstZeroIndex==-1){
           printf("0\n");
       }
       else{
           printf("%d\n",m-firstZeroIndex);
       }
       return 0;
    }