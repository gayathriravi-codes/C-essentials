#include <stdio.h>
#define PI 3.1416
int main()
{
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f units", PI * r * r);
    return 0;
}
