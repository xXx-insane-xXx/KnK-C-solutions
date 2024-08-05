#include <stdio.h>

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void print_fraction_to_lowest_term(int numerator, int denominator)
{
    int divisor = gcd (numerator, denominator);
    numerator = numerator / divisor;
    denominator = denominator / divisor;
    printf("%d/%d\n", numerator, denominator);
}


int main(void)
{
    int n1, n2, d1, d2;
    char op;
    int num_of_input; 
    int valid_input = 0;
    
    while (valid_input == 0)
    {
        printf("Enter two fractions separated by a arithmetic sign (2/3-4/2): ");
        num_of_input = scanf("%d/%d%c%d/%d", &n1, &d1, &op, &n2, &d2);
        
        while (getchar() != '\n');

        if (num_of_input == 5 && op == '+' || op == '-' || op == '*' || op == '/')
        {
            valid_input = 1;
        }
        else 
        {
            printf("Please follow proper spacing or enter valid operation.\n");
        }
    }        

    switch (op)
    {
        case '+': 
        {
            int denominator_result = d1 * d2;
            int numerator_result = (n1 * d2) + (n2 * d1);
            print_fraction_to_lowest_term(numerator_result, denominator_result);
            break;
        }
        case '-': 
        {
            int denominator_result = d1 * d2;
            int numerator_result = (n1 * d2) - (n2 * d1);
            print_fraction_to_lowest_term(numerator_result, denominator_result);
            break;
        }
        case '*': 
        {
            int denominator_result = d1 * d2;
            int numerator_result = n1 * n2;
            print_fraction_to_lowest_term(numerator_result, denominator_result);
            break;
        }
        case '/': 
        {
            int denominator_result = d1 * n2;
            int numerator_result = n1 * d2;
            print_fraction_to_lowest_term(numerator_result, denominator_result);
            break;
        }
        default:
            printf("Please enter a valid operation.");           
    }

    return 0;
}
