#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Rus");

    int duration, costAbonent, costOne;
    printf("������� ����������������� ���������� \n");
    scanf("%d", &duration);
    printf("������� �������� ����������� ����� \n");
    scanf("%d", &costAbonent);
    if(duration < 499){
        printf("%d \n", costAbonent);
    }
    else{
        printf("������� ��������� ������ ����� ������ \n");
        scanf("%d", &costOne);
        while(costOne < 499/costAbonent){
            printf("������� ���������� ���������");
            scanf("%d", &costOne);
        }
        printf("%d \n", (duration - 499) * costOne + costAbonent);
    }

    char *str[10] = {"����","����","���","���","������", "����", "�����", "����", "������", "������"};

    int position;
    scanf("%d", &position);
    printf("%s", str[position]);
    return 0;
}
