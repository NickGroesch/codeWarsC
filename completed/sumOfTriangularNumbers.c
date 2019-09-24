#include <stdio.h>
// #include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    printf("%i\n", n);
    int triNums[n];
    triNums[0] = 1;
    int sum = 1;
    for (int i = 1; i < n; i++)
    {
        triNums[i] = triNums[i - 1] + (i + 1);
        printf("%i-%i;", i, triNums[i]);
        sum += triNums[i];
    }
    printf("\n%i\n", sum);
    return 0;
}