#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("����: myDel.exe <������ ���� �̸�>\n");
        return 1;
    }

    // argv[1]�� �ִ� ���� ����
    if (remove(argv[1]) == 0) {
        printf("'%s' ������ ���������� �����Ǿ����ϴ�.\n", argv[1]);
    }
    else {
        printf("'%s' ������ �������� ���߽��ϴ�.\n", argv[1]);
    }

    return 0;
}