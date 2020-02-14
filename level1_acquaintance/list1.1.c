#include <stdio.h>

/*
Quote:
  You may skip to the start of chapter 3 and come back later when you fell a bit more
  comfortable. Be sure to do so before the end of this level (level1-acquaintance).
*/
int main(void)
{
    // Get the type of a variable in a "bad" way
    // 1. Simply hover the variable name if you're using VSCode (C extensions installed)
    // 2. `printf` it but using the wrong specifier (then compiler will tell you the right one!)

    // Demystifying stuff like 'const char*, char const*, char*const'
    //   const char *c  ->  a pointer pointing to constant char
    //   char const *c  ->  a pointer pointing to constant char (same as the first one)
    //   char *const c  ->  a constant pointer pointing to char
    // Tips
    //   Read from the left to right
    // References
    //   https://web.archive.org/web/20200213030705/https://www.cnblogs.com/lyf-sunicey/p/8274189.html

    // Difference between `char* a` and `char *a`?
    //   It's the same
    // References
    //   https://stackoverflow.com/q/15212126/6273859

    // What is it
    //   A pointer to a character
    // References
    //   https://stackoverflow.com/a/9995974/6273859
    char *name;

    // What is it
    //   A constant pointer pointing to a constant C character
    //     Neither the content of the character or the pointer can be changed.
    //     const protects his left  side (* <- const, char <- const)
    //     const protects his right side only if there's nothing to his left
    // References
    //   https://stackoverflow.com/a/15492973/6273859
    //   https://stackoverflow.com/a/15492990/6273859
    char const *const path_name;

    // What is it
    //   Variable a: a constant pointer pointing to a constant unsigned integer
    //   Variable b: a constant unsigned integer (that is, the `*const` was bound to 'a', not 'b')
    // Confusion
    //   unsigned is simply an alias to 'unsigned int', so it's nothing wrong omitting the `int`
    // References
    //   https://stackoverflow.com/a/4315841/6273859
    unsigned const *const a, b;
}
