#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping: a = %d, b = %d", a, b);
    a = a + b;  // Step 1: Add both numbers
    b = a - b;  // Step 2: Subtract new 'a' from 'b' to get original 'a'
    a = a - b;  // Step 3: Subtract new 'b' from 'a' to get original 'b'
    printf("\nAfter swapping: a = %d, b = %d", a, b);
    return 0;
}
