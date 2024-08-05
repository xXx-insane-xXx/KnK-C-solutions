#include <stdio.h>

char convert_to_uppercase(char ch);

int main(void)
{
    char ch = ' ';
    printf("Enter a phone number: ");
    
    while (ch != '\n')
    {
        
        ch = getchar();
        ch = convert_to_uppercase(ch);

        if (ch == 'A' || ch == 'B' || ch == 'C') {
            printf("%d", 2);
        }
        if (ch == 'D' || ch == 'E' || ch == 'F') {
            printf("%d", 3);
        }
        if (ch == 'G' || ch == 'H' || ch == 'I') {
            printf("%d", 4);
        }
        if (ch == 'J' || ch == 'K' || ch == 'L') {
            printf("%d", 5);
        }
        if (ch == 'M' || ch == 'N' || ch == 'O') {
            printf("%d", 6);
        }
        if (ch == 'P' || ch == 'R' || ch == 'S') {
            printf("%d", 7);
        }
        if (ch == 'T' || ch == 'U' || ch == 'V') {
            printf("%d", 8);
        }
        if (ch == 'W' || ch == 'X' || ch == 'Y') {
            printf("%d", 9);
        }
    }
    printf("\n");
    return 0;
}


char convert_to_uppercase(char ch)
{
    if (ch >= 'a' && ch <= 'z') {
            ch -= ('a' - 'A');
    }
    return ch;
}
