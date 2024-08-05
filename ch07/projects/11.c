#include <stdio.h>

void flush_till_space()
{
    char ch;
    while ((ch = getchar()) != ' ');
}

int main(void)
{
    
    int a, b;
    char ch;
    
    printf("Entera first name and last name: ");
    a = getchar();

    // flush input stream
    flush_till_space();

    while (1)
    {
        b = getchar();
        if (b == '\n') break;
        printf("%c", b);
    }
    printf(", %c.\n", a);

    return 0;
}
