// //solution must allocate all required memory
// //and return a free-able buffer to the caller.

// char *disemvowel(const char *str)
// {
//   return "";
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *original = argv[1];
    int length = strlen(original);
    char *disemVoweled = malloc(length * sizeof(char));
    int count = 0;
    char *vowels = "AEIOUaeiou";
    for (int i = 0; i < length; i++)
    {
        if (strchr(vowels, original[i]))
        {
            printf("BNGBNG\n");
        }
        else
        {
            printf("%c|%i\n", original[i], original[i]);
        }
    }

    return 0;
}