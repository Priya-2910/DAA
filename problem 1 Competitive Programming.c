/* Find Duplicate in Array.
Given a read only array of n integers between 1 and n, find one number that repeats.
Input Format:
First Line - Number of elements
n Lines - n Elements
Output Format:
Element x - That is repeated */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                f = arr[i];
                break;
            }
        }
        if (f == 1) break;
    }

    printf("%d", f);
}
