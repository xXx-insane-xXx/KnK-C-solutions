#include <stdio.h>

int main()
{
    int num;
    float fact = 1;

    printf("Enter number: ");
    scanf("%d", &num);
    
    int num_copy = num;

    while (num != 1)
    {
        fact *= num;
        --num;
    }

    printf("Factorial of %d: %f\n", num_copy, fact);

    return 0;
}
