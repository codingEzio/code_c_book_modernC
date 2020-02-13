#include <stdlib.h>
#include <stdio.h>

/*
Possible compilation commands:
  $ c99          -Wall -lm -o BINARY C_FILE
  $ clang        -Wall -lm -o BINARY C_FILE
  $ gcc -std=c99 -Wall -lm -o BINARY C_FILE
  $ gcc -std=c11 -Wall -lm -o BINARY C_FILE
*/
int main(void)
{
    double A[5] = {
        [0] = 9.0,
        [1] = 2.9,
        [2] = 3.0E+25,
        [3] = .00007,
    };

    for (size_t i = 0; i < 5; i++)
    {
        printf("element %zu is %g, \tits square is %g\n",
               i,
               A[i],
               A[i] * A[i]);
    }
}
