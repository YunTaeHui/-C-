//251120_숙제_백준(string를 배열로 변환)
//#include <stdio.h>
//int main() {
//    char word[5][16] = { };
//    int i, j;
//    char val = 0;
//    int total_num = 0;
//
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 16; j++)
//        {
//            scanf("%c", &val);
//            if (val == '\0' || val == '\n' || val == ' ') break;
//            word[i][j] = val;
//            total_num++;
//        }
//    }
//
//    int printed = 0;
//    for (i = 0; i < 16 && printed < total_num; i++)
//    {
//        for (j = 0; j < 5 && printed < total_num; j++)
//        {
//            if (word[j][i] != '\0')
//            {
//                printf("%c", word[j][i]);
//                printed++;
//            }
//        }
//    }
//    return 0;
//}


//예제모음20_string변환
//#include <stdio.h>
//int main()
//{
//    char ss[20];
//    char tt[20];
//    int i;
//    char val = 0;
//    int total_num = 0;
//
//    printf("문자열을 입력하세요: ");
//    for (i = 0; i < 20; i++)
//    {
//        scanf("%c", &val);
//        if (val == '\0' || val == '\n' || val == ' ') break;
//        ss[i] = val;
//        total_num++;
//    }
//    int printed = 0;
//    for (i = 0; i < 20 && printed < total_num; i++)
//    {
//        tt[i] = ss[total_num - (i + 1)];
//        printf("%c", tt[i]);
//        printed++;   
//    }
//    return 0;
//}