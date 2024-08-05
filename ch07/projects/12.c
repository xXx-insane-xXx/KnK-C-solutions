#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    
    char ch;
    float num = 0;
    float total = 0;
    char op = '+';
    char fl = 0;

    printf("Enter expression: ");

    while ((ch = getchar()) != '\n')
    {


        if (isdigit(ch))
        {
            
            if (fl == 1)
            {
                num = (float) (ch - '0') / 10;
                fl = 0;
            }
            else 
            {
                num = ch - '0';
            }

            if (op == '+')
            {
                total += num;
            }
            else if (op == '-')
            {
                total -= num;
            }
            else if (op == '*')
            {
                total *= num;
            }
            else if (op == '/')
            {
                total /= num;
            }

        }
        else 
        {
            if (ch == '.')
            {
                fl = 1;
            }

            else if (ch == '+')
            {
                op = '+';
            }
            else if (ch == '-')
            {
                op = '-';
            }
            else if (ch == '*')
            {
                op = '*';
            }
            else if (ch == '/')
            {
                op = '/';
            }
        }
    }

    printf("Total: %.2f\n", total);

    return 0;
}
