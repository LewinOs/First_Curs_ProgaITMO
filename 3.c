#include <stdio.h>
#include <locale.h>
int main(int argv, char** argc) {
setlocale(LC_ALL, "Rus");
int a_16, a_16_2, count;

printf("������� � 16��� ������� \n");
scanf("%x",&a_16);
printf("� 8��� ������� = %o \n", a_16);


printf("%x ����� �� 4 ���� ����� = %x \n", a_16, a_16 << 4);

printf("%x ��������� = %x \n", a_16, ~a_16);

printf("������� ����� ����� � 16 ������� \n");
scanf("%x", &a_16_2);
printf("%x and %x = %x", a_16, a_16_2,  a_16 & a_16_2);
return 0;
}
