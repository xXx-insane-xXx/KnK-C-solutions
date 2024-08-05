#include <stdio.h>

int main(void)
{
    long long i, n;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of enteries in table: ");
    scanf("%lld", &n);
    while (getchar() != '\n');
    
    for (i = 1; i <= n; i++)
    {
        if (i%24 == 0)
        {
            printf("Please Enter to continue....");
            getchar();
        }
        printf("%20lld%20lld\n", i, i * i);
    }
    
    return 0;
}
