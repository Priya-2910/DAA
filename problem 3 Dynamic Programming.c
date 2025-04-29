/* Given two strings find the length of the common longest subsequence(need not be contiguous) between the two.



Example:

 s1: ggtabe

 s2: tgatasb




s1	 	a	g	
g
t
a
b
 
s2	 	
g
x	
t
x
a
y
b

The length is 4

Solveing it using Dynamic Programming */

#include <stdio.h>
#include <string.h>

// Function to find max of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char s1[100], s2[100];
    scanf("%s", s1);  // First string
    scanf("%s", s2);  // Second string

    int m = strlen(s1);
    int n = strlen(s2);

    int dp[100][100]; // dp[i][j] = LCS of first i chars of s1 and first j chars of s2

    // Build the dp table
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    printf("%d\n", dp[m][n]);  // Print the length of LCS

    return 0;
}
