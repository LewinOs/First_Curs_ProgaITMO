#include <stdio.h>
#include <locale.h>
int main(int argv, char** argc) {
setlocale(LC_ALL, "Rus");
    int a;
    printf("������� ������ ����� ��� �������� \n");
    scanf("%d", &a);
    printf("%s",((a>=21) && (a<=56))? "��������" : "�� ��������");

    printf("������� ������ ����� ��� �������� \n");
    scanf("%x", &a);
    printf("12� ��� = %d", (2>>1) & a);

return 0;
}
