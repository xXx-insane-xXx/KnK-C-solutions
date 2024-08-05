#include <stdio.h>

int main(void)
{
    
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(short int));
    printf("%zu\n", sizeof(long int));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    printf("\n");

    printf("%d\n", (int) sizeof(int));
    printf("%d\n", (int) sizeof(short int));
    printf("%d\n", (int) sizeof(long int));
    printf("%d\n", (int) sizeof(float));
    printf("%d\n", (int) sizeof(double));
    printf("%d\n", (int) sizeof(long double));


    return 0;
}
