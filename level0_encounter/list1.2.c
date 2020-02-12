/*
An example C program with flaws
  $ gcc -w         →  suppress all warnings
  $ gcc -Wall      →  enable   all warnings
  $ gcc -Werror    ↓  enable specified ones
  $ gcc -Wwarning
*/
void main()
{
    int i;
    double A[5] = {
        9.0,
        2.9,
        3.0E25,
        .000007,
    };

    for (i = 0; i < 5; ++i)
    {
        printf("element %d is %g, \tits square is %g\n",
               i, A[i], A[i] * A[i]);
    }

    return 0;
}
