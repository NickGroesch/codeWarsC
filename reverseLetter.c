#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) // I've conflated reverseLetters and disemvowelTrolls
{
    //a=97, z=122, e=101, i=105, o=111, u=117
    char *str = argv[1];

    int length = strlen(str);
    char result[length];
    memset(result, 0, length * sizeof(char));
    int index = 0;
    for (int i = length - 1; i > -1; i--)
    {
        if (
            str[i] <= 97 ||
            str[i] == 101 ||
            str[i] == 105 ||
            str[i] == 111 ||
            str[i] == 117 ||
            str[i] > 122)
        {
            printf("vowel %i\n", i);
        }
        else
        {
            result[index] = str[i];
            index += 1;
        }
    }
    printf("length: %i\n", length);
    printf("result: %s\n", result);
    return 0; //coding and coding..
}

// CODEWARS SITE VERSION
// #include <string.h>
// char *reverse_letter(const char *str){
//     int length = strlen(str);
//     char result[length];
//     memset(result, 0, length * sizeof(char));
//     int index = 0;
//     for (int i = length - 1; i > -1; i--)
//     {
//         if (
//             str[i] < 97 ||
// //             str[i] == 101 ||
// //             str[i] == 105 ||
// //             str[i] == 111 ||
// //             str[i] == 117 ||
//             str[i] > 122)
//         {
//         }
//         else
//         {
//             result[index] = str[i];
//             index += 1;
//         }
//     }
//     printf("length: %i\n", length);
//     printf("result: %s\n", result);
//     return result; //coding and coding..
// }