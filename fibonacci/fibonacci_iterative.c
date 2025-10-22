#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, temp;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", t1);
        temp = t1 + t2;   // temp is the next term
        t1 = t2;
        t2 = temp;
    }
    return 0;
}
