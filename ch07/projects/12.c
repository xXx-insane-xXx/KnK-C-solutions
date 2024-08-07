#include <stdio.h>
#include <ctype.h>

/*
 * This code can handle expression like : 2+2.3/4.2*3.9
 *
 * Caveats:
 * 1. Doesnt follow bodmas.
 * 2. Operates left to right.
 * 3. Can only take single digit integer and fractional part.
 *
 * */

int main(void)
{
    
    char ch;
    char op = '+';
    float num = 0;
    float total = 0;
    float num_frac = 0;
    float final_num = 0;

    printf("Enter expression: ");

    while ((ch = getchar()) != '\n')
    {


        if (isdigit(ch))
        {
           
            // Converts char to int equivalent {'2' -> 2}
            num = ch - '0';

            // num_frac = 0 always when used here
            final_num = num + num_frac;

            // So that num can be used to reverse the recent action on total if the actual number turns out to contain a frac part
            num = final_num;

            // Operations on total if number's frac part is 0
            if (op == '+')
            {
                total += final_num;
            }
            else if (op == '-')
            {
                total -= final_num;
            }
            else if (op == '*')
            {

                total *= final_num;
            }
            else if (op == '/')
            {

                total /= final_num;
            }

        }
        else 
        {
            if (ch == '.')
            {
                ch = getchar();
                num_frac = (float) (ch - '0') / 10;
                final_num = num + num_frac;


                // Reversing the action on total so that final_num can be used instead of num
                // Eg:  num = +4
                //      total += 4
                //      But it turns out the actual number is 4.2
                //      So, total -= 4
                //      And then, total += 4.2
                if (op == '+')
                {
                    total -= num;
                    total += final_num;
                    num_frac = 0;
                }
                else if (op == '-')
                {
                    total += num;
                    total -= final_num;
                    num_frac = 0;
                }
                else if (op == '*')
                {
                    total /= num;
                    total *= final_num;
                    num_frac = 0;
                }
                else if (op == '/')
                {
                    total *= num;
                    total /= final_num;
                    num_frac = 0;
                }

            }

            // To be operator attached to a number
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
