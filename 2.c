#include <math.h>
#include <stdio.h>

int main(int argv, char** argc) {

    char str[20];
    float alf,pi = 3.1415;
    float z1,z2;
    scanf("%f", &alf);
    z1 = (sin(4*alf)/(1+cos(4*alf)))*(cos(2*alf)/(1+cos(2*alf)));
    z2 = 1/(tan(((3/2)*pi)-alf));
    printf("%f %f",z1,z2);
return 0;
}
