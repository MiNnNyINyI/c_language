#include <stdio.h>

void patterm1(int a);

int main() {
    int row=0;
    printf("Enter Size Patterm!: ");
    scanf("%d", &row);

    patterm1(row);
    patterm1(row);

    return 0;
}

void patterm1(int a) {
    int i, k;
    for(i=0; i<a; i++) {
        for(k=0; k<i; k++) {
                printf("*");
        } 
        printf("\n");
    }
    printf("\n");
}