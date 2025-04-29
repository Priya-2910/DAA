/* Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.
Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.
Example 1:
Input: 
3
1 2 3
2
1 1
Output: 
1
Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.
Constraints:
1 <= g.length <= 3 * 10^4
0 <= s.length <= 3 * 10^4
1 <= g[i], s[j] <= 2^31 - 1 */

#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b){
    return(*(int*)a-*(int*)b);
}
int findchild(int g[],int gSize,int s[],int sSize){
    qsort(g,gSize,sizeof(int),compare);
    qsort(s,sSize,sizeof(int),compare);
    int childIndex=0;
    int cookieIndex=0;
    while(childIndex<gSize&&cookieIndex<sSize){
        if(s[cookieIndex]>=g[childIndex]){
            childIndex++;
        }
        cookieIndex++;
    }
    return childIndex;
}
    int main(){
        int gSize,sSize;
        scanf("%d",&gSize);
        int*g=(int*)malloc(gSize*sizeof(int));
        if(g==NULL){
            fprintf(stderr,"Memory allocation failed\n");
            return 1;
        }
        for(int i=0;i<gSize;i++){
            scanf("%d",&g[i]);
        }
        scanf("%d",&sSize);
        int*s=(int*)malloc(sSize*sizeof(int));
        if(s==NULL){
            fprintf(stderr,"Memory allocation failed\n");
            free(g);
            return 1;
        }
        for(int i=0;i<sSize;i++){
            scanf("%d",&s[i]);
        }
        printf("%d\n",findchild(g,gSize,s,sSize));
        free(g);
        free(s);
        return 0;
    }