//심화_36p_문제1
//"HelloWorld"가 들어있는 파일을 하나 생성하는 프로그램을 작성하여라. *.txt
//(파일이름자유)(파일 1개 생성)
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	fprintf(aFile, "\"HelloWorld\"");
//	fclose(aFile);
//
//	return 0;
//}


//심화_36p_문제2
//"HelloWorld"와 "byeworld"가 각각 들어있는 파일을 생성하는 프로그램을 작성하여라.
//(파일이름자유)(파일 2개 생성)
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	fprintf(aFile, "\"HelloWorld\"");
//	fclose(aFile);
//
//	FILE* bFile;
//	bFile = fopen("bfile.txt", "w");
//	fprintf(bFile, "\"ByeWorld\"");
//	fclose(bFile);
//
//	return 0;
//}


//심화_36p_문제3
//문제2번에서 문자열을 사용자가 입력할 수 있도록 수정하여라.
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	puts("첫 번째 파일에 내용을 입력하세요: ");
//	char aWord[100];
//	scanf("%s", aWord);
//	fprintf(aFile, "%s", aWord);
//	fclose(aFile);
//
//	FILE* bFile;
//	bFile = fopen("bfile.txt", "w");
//	puts("두 번째 파일에 내용을 입력하세요: ");
//	char bWord[100];
//	scanf("%s", bWord);
//	fprintf(bFile, "%s", bWord);
//	fclose(bFile);
//
//	return 0;
//}


//심화_36p_문제4
//파일에 "안녕하세요"와 "안녕히가세요"를 각각 입력한 후 닫고 (문제3번 코드),
//다시 열어 파일에서 읽어온 두 문자열을 출력하는 프로그램을 만들어라.
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	puts("첫 번째 파일에 내용을 입력하세요: ");
//	char aWord[100];
//	scanf("%s", aWord);
//	fprintf(aFile, "%s", aWord);
//	fclose(aFile);
//
//	FILE* bFile;
//	bFile = fopen("bfile.txt", "w");
//	puts("두 번째 파일에 내용을 입력하세요: ");
//	char bWord[100];
//	scanf("%s", bWord);
//	fprintf(bFile, "%s", bWord);
//	fclose(bFile);
//
//	aFile = fopen("afile.txt", "r");
//	fscanf(aFile, "%s", aWord);
//	printf("첫 번째 파일의 내용은 %s\n", aWord);
//	fclose(aFile);
//
//	bFile = fopen("bfile.txt", "r");
//	fscanf(bFile, "%s", bWord);
//	printf("두 번째 파일의 내용은 % s\n", bWord);
//	fclose(bFile);
//
//	return 0;
//}


//심화_36p_문제5
//문제 4번 코드에 추가로, 두 파일을 다시 연 후, 같은 위치에 같은 문자가 몇 개
//존재하는지 비교하여 출력하는 프로그램을 작성하여라.
//("HelloWorld"와 "byeworld"로는 1개가 나와야 함)
//#include <stdio.h>
//int main()
//{
//	FILE* aFile;
//	aFile = fopen("afile.txt", "w");
//	puts("첫 번째 파일에 내용을 입력하세요: ");
//	char aWord[100];
//	scanf("%s", aWord);
//	fprintf(aFile, "%s", aWord);
//	fclose(aFile);
//
//	FILE* bFile;
//	bFile = fopen("bfile.txt", "w");
//	puts("두 번째 파일에 내용을 입력하세요: ");
//	char bWord[100];
//	scanf("%s", bWord);
//	fprintf(bFile, "%s", bWord);
//	fclose(bFile);
//
//	aFile = fopen("afile.txt", "r");
//	fscanf(aFile, "%s", aWord);
//	printf("첫 번째 파일의 내용은 %s\n", aWord);
//	fclose(aFile);
//
//	bFile = fopen("bfile.txt", "r");
//	fscanf(bFile, "%s", bWord);
//	printf("두 번째 파일의 내용은 %s\n", bWord);
//	fclose(bFile);
//
//	int i = 0;
//	int SameCount = 0;
//
//	while (aWord[i] != '\0' && bWord[i] != '\0') {
//		if (aWord[i] == bWord[i]) {
//			printf("%d번째에서 %c문자가 같은 위치에 있습니다.\n", i + 1, aWord[i]);
//			SameCount++;
//		}
//		i++;
//	}
//	printf("같은 문자는 총 %d 개 있습니다.\n", SameCount);
//	return 0;
//}