/* Problem statement:
Find the length of the Longest Non-decreasing Subsequence in a given Sequence.
Eg:
Input:9
Sequence:[-1,3,4,5,2,2,2,2,3]
the subsequence is [-1,2,2,2,2,3]
Output:6 */

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[1001];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int dp[1001];
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] >= a[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > maxLen)
            maxLen = dp[i];
    }
    printf("%d\n", maxLen);
    return 0;
}