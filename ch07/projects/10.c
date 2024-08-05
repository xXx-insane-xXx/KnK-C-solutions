#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char c = '?';
    int vc = 0;

    while (c != '\n')
    {
        c = getchar();
        if (tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u')
        {
            vc++; 
        }
    }

    printf("Your sentence contains %d vowels", vc);

    return 0;
}
