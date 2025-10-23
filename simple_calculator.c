#include <stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    int a,b;
    printf("1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n");
    printf("Read choice: ");
    scanf("%d",&ch);
    printf("Read the values of a & b: ");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1: printf("Result = %d\n", a + b);
                break;
        case 2: printf("Result = %d\n", a - b);
                break;
        case 3: printf("Result = %d\n", a * b);
                break;
        case 4: printf("Result = %d\n", a / b);
                break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
