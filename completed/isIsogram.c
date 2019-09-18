#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) //
// bool IsIsogram(char *str)
{ // Code on you crazy diamond!
    char *str = argv[1];
    int length = strlen(str);
    char array[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = 0;
    }
    for (int i = 0; i < length; i++)
    {
        int arrlen = strlen(array);
        printf("arrlen=%i at iteration %i \n", arrlen, i);
        for (int j = 0; j < arrlen; j++)
        {
            if (tolower(str[i]) == tolower(array[j]))
            {
                printf("HEY %c==%c\n", str[i], array[j]);
                return 1; //false
            }
            printf("match: %c-%c at %i\n", str[i], array[j], j);
        }
        array[i] = str[i];
        printf("%s-%i\n", array, i);
    }
    return 0; //true
}
//IsIsogram("abcdefghijklmnop"), 1)