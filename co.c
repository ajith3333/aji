#include <stdio.h>
int main()
{
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);
    {
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
