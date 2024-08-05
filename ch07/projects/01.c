#include <stdio.h>

int main(void)
{
    long long i, n;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of enteries in table: ");
    scanf("%lld", &n);
    
    for (i = 1; i <= n; i++)
    {
        printf("%20lld%20lld\n", i, i * i);
    }
    
    return 0;
}
