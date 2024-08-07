#include <stdio.h>
#include <math.h>

int main(void)
{

    double num;
    double sqroot = 1;
    double old_sqroot = 1;

    printf("Enter a positive number: ");
    scanf("%lf", &num);

    // while (fabs(num - sqroot*sqroot) >= 0.00001)

    sqroot = (sqroot + (num / sqroot)) / 2;
    while (fabs(old_sqroot - sqroot) > 0.00001*sqroot)
    {

        old_sqroot = sqroot;
        sqroot = (sqroot + (num / sqroot)) / 2;
    }

    printf("Square root of %f is: %f\n", num, sqroot);

    return 0;
}
