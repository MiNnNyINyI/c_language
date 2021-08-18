#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, k,frequence;
    int one=0, two=0, three=0, four=0, five=0, six=0;
    //printf("Enter Frequence!: ");
    //scanf("%d", &frequence);
    frequence = 100000;

    for(i=0;i<frequence;i++){
        srand(time(NULL));
        int dice = (rand()%6)+1;
        switch(dice) {
            case 1: printf("1");
                ++one;
                    break;
            case 2: printf("2");
                ++two;
                    break;
            case 3: printf("3");
                ++three;
                    break;
            case 4: printf("4");
                ++four;
                    break;
            case 5: printf("5");
                ++five;
                    break;
            case 6: printf("6");
                ++six;
                    break;
        }
    }
    printf("\n");
    printf("1--> %d\n", one);
    printf("2--> %d\n", two);
    printf("3--> %d\n", three);
    printf("4--> %d\n", four);
    printf("5--> %d\n", five);
    printf("6--> %d\n", six);
    return 0;
}