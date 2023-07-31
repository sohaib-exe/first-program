#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char a = 'A';
    char s = 'S';
    char d = 'D';
    char m = 'M';

    int x = get_int("x: ");
    int y = get_int("y: ");
    char action = get_char("What do you want to do with x & y? D, M, A, S? ");

    if (action == a)
    printf ("The answer is %i\n", x + y);

    else if (action == s)
    printf ("The answer is %i\n", x - y);

    else if (action == d)
    printf ("The answer is %i\n", x / y);

    else if (action == m)
    printf ("The answer is %i\n", x * y);
}