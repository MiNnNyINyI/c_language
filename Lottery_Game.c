#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <conio.h>

static int read_age(int a);
static int id_gen( int b);
static int game(int i, int k);
static int dice_gen( int c);

void check(int c, int d);

int main() { 
    static int age_, id_, o_id, s_id, r_age, a_money, p_money, start_game, stop_game, d_game;
    static int total=0, result=0;
    static int start_dice, guess_;
    
    printf("\t\t\t\t WELCOME TO GAME! \t\t\t\t\n");

    printf("\tEnter You AGE: ");
    scanf("%d", &age_);
    
    r_age = read_age(age_);
    printf("\t\tYou Can Play Game!\n", r_age);

    printf("\t\t\tWould You Like To Generate Your 'ID'.\n");
    printf("\t\t\tThen! Enter Random 'A DIGIT'! (1 to 9):---> ");
    scanf("%d", &id_);
    
    s_id = id_gen(id_);     // s_id variable can be 'int'
    printf("\t\t\t\tYour Generate ID is --> %d\n", s_id);
    
    printf("\t\t\tEnter YOu OWN GENERATED ID: ");
    scanf("%d", &o_id);
    
    check(s_id, o_id);     // FUNCTION OF CHECKING.(int c, int d)

    printf("\t\tEnter Your Amount Of Money! : ");
    scanf("%d", &a_money);

    while (s_id == o_id && a_money >= 50) {
        printf("\tPlayer ID %d with Amount of Money is %d\n", s_id, a_money);
        printf("Total = %d and Enter Money To Play Dice Game! :: ", a_money);
        scanf("%d", &p_money);
        printf("\tEnter Your GUESS NUMBER:: ");
        scanf("%d", &guess_);

        start_dice = id_gen(id_)%5+1;
        printf("\t\tDice Function ---> %d\n", start_dice);

        if(guess_ == start_dice) {
            printf("%d == %d\n", start_dice, guess_);
            printf("\t\t\tYOU WON! CONGARATULATION!\n");
            a_money = (p_money*10) + a_money;
            printf("\t\t\tToTal MONEY :: %d", a_money);
        }
        else if(guess_ != start_dice){
            printf("\t\t\t%d != %d\n", start_dice, guess_);
            printf("\t\t\tYOU LOSE! PLAY AGAIN!\n");
            a_money = a_money - p_money;
            if(a_money <= 10) {
                printf("\t\t\tNot Enought MONEY! :%d:\n", a_money);
                exit(0);
            }
            printf("\t\tToTal MONEY :: %d\n", a_money);
        }
        else {
            printf("\t\tGET WRONG!\n");
        }
    }
    
    return 0;
}

static int read_age(int a) {
    int permit=18;
    int not_permit=80;
    if(a >= permit && a <= not_permit) {
        return a;
    }
    else {
        printf("\t\tYou Have No Permission To  ALLOW!!\n");
        exit(0);
    }
}

static int id_gen( int b) {
    static int z;
    srand(time(NULL));
    z = (b+(rand()%99));
    return z;
}

void check(int c, int d) {
    if(c == d) {
        printf("\t\tCheck function \n");
        printf("\t\tTRUE! [%d == %d]\n", d, c);
    }
    else {
        printf("\t\tFAlSE! [%d != %d]\n", d, c);
        exit(0);
    }
}

