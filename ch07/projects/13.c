#include <stdio.h>

int main(void)
{
    
    char ch;
    int tmp = 0;
    float avg = 0;
    int counter = 0;

    printf("Enter a sentence: ");
    
    while (1)
    {
        
        ch = getchar();

        if (ch == ' ')
        {
            avg += tmp;
            counter++;
            tmp = 0;
            continue;
        }

        if (ch == '\n')
        {
            avg += tmp;
            counter++;
            break;
        }

        tmp++;
    }

    printf("%f %d\n", avg, counter);
    printf("Average word length: %.1f\n", avg/counter);

    return 0;
}
