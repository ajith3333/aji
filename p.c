#include <stdio.h>
int main()
{

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    {
        result *= base;
        --exponent;
    }

    printf("Answer = %lld", result);

    return 0;
}
