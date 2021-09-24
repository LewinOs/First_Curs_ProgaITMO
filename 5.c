#include <stdio.h>

int main(int argv, char** argc) {

    int a[7]={23, 5678, 2, 564, 365, 77,443};
    int b[2][2]={1,1,1,4};
    int b2[2][2]={1,2,4,1};
    int b3[2][2]={0};
    for(int i = 0; i<7; i++){
            printf("%d ",a[i]);
    }
    printf("\n");
    for(int i = 0; i<2; i++){
        for(int x = 0;x<2;x++){
                for(int h = 0; h<2;h++){
                    b3[i][x]+=b[i][h]*b2[h][x];
            }
        }
    }
    for(int i = 0; i<2; i++){
        for(int x = 0; x<2;x++){
            printf("%3d ",b3[i][x]);
        }
        printf("\n");
    }
return 0;
}
