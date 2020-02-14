#include <stdio.h>

int main(void)
{
    /*
    The structure of a switch can be more flexible than if-else.
    But for the `case` part, its value MUST be int constant expressions (e.g. 'a', 1).
    */
    switch ('o')
    {
    case 'm':
        puts("m: Miss Fortune");
        break;
    case 'i':
        puts("i: Irelia");
        break;

    default:
        puts("Um.. what?");
        break;
    }

    switch (3)
    {
    default:
        puts("++++ ..... +++");
    case 4:
        puts("++++");
    case 3:
        puts("+++");
    case 2:
        puts("++");
    case 1:
        puts("+");
    case 0:;
    }
}
