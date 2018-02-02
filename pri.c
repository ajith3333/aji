#include <stdio.h>
int main()
{
    int low, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {

        for(i = 2; i <= low/2; ++i)
        {
           
                flag = 1;
                break;
            }
        

        if (flag == 0)
            printf("%d ", low);
    }

    return 0;
}
