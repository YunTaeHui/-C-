#include <stdio.h>
#include <string.h>

int main() {
    char word[5][16] = { };
    int i, j;
    char val = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 16; j++)
        {
            scanf("%c", &val);
            if (val == '\0' || val == '\n' || val == ' ') break;
            word[i][j] = val;
        }
    }

    for (i = 0; i < 16; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (val != '\0' || val != '\n' || val != ' ')
                printf("%c", word[j][i]);
            else break;
        }
    }
    return 0;
}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char word[5][16];
//    int len[5];
//    int i, j;
//
//    for (i = 0; i < 5; i++) {
//        scanf("%s", word[i]);
//        len[i] = strlen(word[i]);
//    }
//
//    int maxLen = 0;
//    for (i = 0; i < 5; i++) {
//        if (len[i] > maxLen) {
//            maxLen = len[i];
//        }
//    }
//
//    for (int col = 0; col < maxLen; col++) {
//        for (int row = 0; row < 5; row++) {
//            if (col < len[row]) {
//                printf("%c", word[row][col]);
//            }
//        }
//    }
//    return 0;
//}