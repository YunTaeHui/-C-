#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("사용법: myDel.exe <삭제할 파일 이름>\n");
        return 1;
    }

    // argv[1]에 있는 파일 삭제
    if (remove(argv[1]) == 0) {
        printf("'%s' 파일이 성공적으로 삭제되었습니다.\n", argv[1]);
    }
    else {
        printf("'%s' 파일을 삭제하지 못했습니다.\n", argv[1]);
    }

    return 0;
}