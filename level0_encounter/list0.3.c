#include <stdio.h>
#include <stdlib.h>

/*
Where to find help, aka. documentations?
  - Online
    - https://en.cppreference.com/w/c             full ref
    - https://en.cppreference.com/w/c/language    language itself
  - Offline
    - search available documents
      - man -k  KEYWORD
      - apropos KEYWORD (equivalent to 'man -k')
    - man SECTION_NUM KEYWORD
      - man 1 printf
      - man 3 printf
  - Third-party
    - tldr
      - pip     install tldr
      - brew    install tldr
      - apt-get install tldr
      - https://tldr.ostera.io/
*/
int main(void)
{
    double a;       // Declaration
    a = 1.0;        // Definition
    double b = 2.0; // Declaration plus definition

    // A visualization of variable 'A'
    // A [ [double 9.0], [double, 2.9] ... [double .00007] ]
    double A[5] = {
        [0] = 9.0,
        [1] = 2.9,
        [2] = 3.0E+25,
        [3] = .00007,
    };
    A[4] = 20.5;

    // The loop var should be always defined in the init part of a `for`.
    // Don't define it early in your program.
    for (int i = 0; i < 2; i++)
    {
        printf("meh\n");
    }

    // Most programming languages are "call by value", so does C. Simply put, the call
    // itself could not modify the original value. You could change to "ref" if using pointers.
    return EXIT_SUCCESS;
}
