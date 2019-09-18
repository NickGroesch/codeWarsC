#include <stdio.h>
#include <ctype.h>
#include <string.h>
// #include <stdio.h>

int main(int argc, char *argv[])
{
    char *input = argv[1];
    char cache[36] = {0};
    char doubles[36] = {0};
    for (int i = 0; input[i] != 0; i++)
    {
        char c = tolower(input[i]) - 'a'; //this only works for alphabetical because 0-9 is way off,
        if (c < 0)
        {
            c = input[i] - 22;
        }
        // printf("%i\n", c);
        if (cache[c])
        {
            doubles[c] = 1;
        }
        cache[c] = 1;
    }
    int counter = 0;
    for (int i = 0; i < 36; i++)
    {
        // printf("%i|%i|%i\n", i, cache[i], doubles[i]);
        if (doubles[i])
        {
            counter++;
        }
    }
    printf("there were %i doubles\n", counter);
    return 0;
}
// bool IsIsogram(char *str) {
//     char cache[26] = {0};
//     for (int i = 0; str[i] != 0; ++i) {
//       char c = tolower(str[i]) - 'a';
//       if (cache[c]) return false;
//       cache[c] = 1;
//     }
//     return str[0] == 0 || true;
// }