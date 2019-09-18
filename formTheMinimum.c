#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int *values[argc - 1];
    int *digits[10] = {0};
    for (int i = 1; i < argc; i++)
    {
        values[i - 1] = atoi(argv[i]);
        int v = values[i - 1];
        digits[v] = 1;
        printf("%s|%i\n", argv[i], values[i - 1]);
    }
    char result[10] = {0};
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (digits[i])
        {
            printf("%i\n", i);
            result[count] = i + 48;
            count++;
        }
    }
    printf("result:%s\n", result);
    return 1;
}
