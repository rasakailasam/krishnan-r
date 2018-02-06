#include <stdio.h>
int main()
{
    int a, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &a);

    originalInteger = a;

    // reversed integer is stored in variable 
    while( a!=0 )
    {
        remainder = a%10;
        reversedInteger = reversedInteger*10 + remainder;
        a /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d Yes.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
