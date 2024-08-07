#include <stdio.h>

int main(void)
{

    double num, total = 0.0;
    char ch = '?';

    printf("Enter an expression: ");
    scanf("%lf", &total);

    while ((ch=getchar()) != '\n')
    {
        switch (ch)
        {
            case '+':
                scanf("%lf", &num);
                total += num;
                break;
            case '-':
                scanf("%lf", &num);
                total -= num;
                break;
            case '*':
                scanf("%lf", &num);
                total *= num;
                break;
            case '/':
                scanf("%lf", &num);
                total /= num;
                break;
            default:
                break;
        }
    }
    
    return 0;
}
