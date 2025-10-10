#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    if (n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("\nRead the factorial number: ");
    scanf("%d",&n);
    printf("\nThe factorial of %d is %d",n,fact(n));
    return 0;
}
