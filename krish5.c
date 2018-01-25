#include <stdio.h>
int main()
{
    int n, a, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(a=1; a <= n; ++a)
    {
        sum += a;   // sum = sum+a;
    }

    printf("Sum = %d",sum);

    return 0;
}
