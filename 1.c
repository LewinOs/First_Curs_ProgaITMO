#include <stdio.h>

int main(int argv, char** argc) {

    char str[20];
    float a;

    printf("Vvedite stroku \n");
    scanf("%s", str);
    printf("Vvedite chislo \n");
    scanf("%f", &a);
    printf("������ - %s\n", str);
    printf("����� - %f \n", a);
return 0;
}
