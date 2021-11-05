#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(int argv, char** argc) {

    int N = 4;
    float A[4]={56.4, 43.5, 7.7, 44.3};
    float *x = A;
    for(int i = 0; i < N; ++i){
        printf("%f ", *(x + i));
    }
    printf("\n");
    float *A2 = (float *)malloc(N * sizeof(float));
    memcpy(A2, A, N * sizeof(float));
    if (NULL == A2){
        printf("Ne nado tak delat'");
        exit(1);
    }
    for(int i = 0; i < N; ++i){
        printf("%f ", A2[i]);
    }
    free(A2);
    return 0;
}
