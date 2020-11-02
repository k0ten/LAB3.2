#include<stdio.h>
#include<conio.h>

#define N 3


int main() {
    int massiv4k[N][N],min;

    for (int i = 0; i < N; i++) {   //строки
        for (int j = 0; j < N; j++) {  //столбцы
            printf("massiv4k[%d][%d] = ", i, j);
            scanf_s("%d", &massiv4k[i][j]);
        }
    } 
    for (int i=0; i<N; i++)
    {printf ("\n");
        for (int j=0; j<N; j++)
            printf("%d\t", massiv4k[i][j]);
    }

    min = massiv4k[N - 1][N - 1];
    for (int i = 0; i < N; ++i) {
        for (int j = N - i; j < N; ++j) {
            if (min < massiv4k[i][j])
                min = massiv4k[i][j];
        }
    }
    printf("\nMaksimalniy: %d",min);
}
