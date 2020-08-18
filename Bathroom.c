#include <stdio.h>
#include <math.h>

#define NAME_LEN    64

typedef struct {
    char  name[NAME_LEN];    /* Name   (名前) */
    int   age;               /* Age    (年齢) */
    int   height;            /* Height (身長) */
    float weight;            /* Weight (体重) */
}Humankind;


/* --- Enter_The_Bathroom Function --- */
void Enter_The_Bathroom(void)                   /* --- Ask someone for their name when they enter the bathroom.　（誰かが、トイレに入ったときに名前を尋ねる） --- */
{
    Humankind human ;

    puts("Who came to the bathroom?");
    printf("Name : ");
    scanf("%s", human.name);
    printf("Welcome! %s.\n", human.name);
}

/* --- Prepare Bathroom Function --- */
void Prepare_Bathroom(void)
{
    int ix = 0;

    printf("Please choose one. <Urine = 0 , Stool = 1> : ");
    scanf("%d", &ix);

    if (ix == 0) {                               /* Do later : Change　processing with Urine or Stool　（後に、UrineかStoolのどちらかを選択した時の処理を加える） */
        printf("Ok, Prepare now.\n");            /* For instance : printf("How is your bowel movement? <Solid = 0, Middle = 1, Liquid = 2> : "); */
        puts(" ");                               
    } else {
        printf("Ok, Prepare now.\n");
        puts(" ");
    }
}

/* --- Finish Bathroom --- */
void Finish_Bathroom(void)
{
    int iy = 0;

    do {
        printf("Did you finish? <Finish = 0, Wait = 1> : ");
        scanf("%d", &iy);

        if (iy == 0) {
            printf("Let it flow.\n");
        } 
    } while (iy != 0);

    
}

/* --- Earth Bathroom Function --- */
void Earth_Bathroom(void)
{
    Enter_The_Bathroom();
    Prepare_Bathroom();
    Finish_Bathroom();
}


/* --- main Function --- */
int main(void)
{
    Humankind human;
    
    Earth_Bathroom();

    return 0;
}

