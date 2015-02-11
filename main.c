#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>




int clearscreen()
{
  const char* CLEAR_SCREE_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO,CLEAR_SCREE_ANSI,12);
  //system("clear");//system("cls");
}

int menu (void)
{
    clearscreen();
    int menuinput = 0;
    int chooseokay = 0;

    printf("### Mastermind ###\n\n");
    printf("Please choose from this menu:\n\n");
    printf("[1] Start a new game\n[2] Best scores\n[3] Load game\n[4] Exit\n");

    scanf("%d", &menuinput);

    switch (menuinput)
    {
        case 1:
            newgame();
            break;
        default:
            printf("neeee");
            menu();
            break;
/*        case '2':
            bestscores();
            break;
        case '3':
            loadgame();
            break;*/
           case 4:
             exit(0);
    }

}

bestscores()
{

}

newgame()
{
clearscreen();
int a = rand() % 10;
int b = rand() % 10;
int c = rand() % 10;
int d = rand() % 10;
int in1, in2, in3, in4 = 11;
int array[2][4] = {{a,b,c,d}, {0,0,0,0}}; // a tömb első sora a 'gondolt' változók, a  második sora, hogy volt-e már beszámítva a 'vanebenne' értékbe, vagy sem.
int probalkozas,j,i =1;
int vanebenne, johelyen, nincs =0;
int inputstring =0;
int inputarray[4];
char username;

printf("Indulhat a játék, adj meg 4 egész számot 0-9ig, majd üss entert. 10 próbálkozásod van.\n\n");


while ((johelyen != 4) || (probalkozas < 11))
{
    scanf("%d", &inputstring);

/*
   #########################################################
!!!! hiányzik az input változó in1 in2... re bontása és bemenet hibakezelése
*/


// beírt érték kiértékelése

    for (i=1;i<=4;i++)
        {
            if (in1==array[1][i]){vanebenne++;array[2][i] = 1;}
            if (in1==array[1][i]){johelyen++;}
        }
    for (i=1;i<=4;i++)
        {
            if ((in2==array[i]) && (array[2][i] != 1)){vanebenne++;array[2][i] = 1;}
            if (in2==array[1][i]){johelyen++;}
        }
    for (i=1;i<=4;i++)
        {
            if ((in3==array[i]) && (array[2][i] != 1)){vanebenne++;array[2][i] = 1;}
            if (in3==array[1][i]){johelyen++;}
        }
    for (i=1;i<=4;i++)
        {
            if ((in4==array[i]) && (array[2][i] != 1)){vanebenne++;array[2][i] = 1;}
            if (in4==array[1][i]){johelyen++;}
        }

// /beírt érték kiértékelése

    vanebenne=vanebenne-johelyen;
    nincs = 4-(vanebenne+johelyen);

//eredmény kiíratása
    for (j=1;j<=johelyen;j++)
    {
        printf("O");
    }
    for (j=1;j<=vanebenne;j++)
    {
        printf("X");
    }
    for (j=1;j<=nincs;j++)
    {
        printf("/");
    }
    // /eredmény kiíratása

    probalkozas ++;
}

// ha nyer az illető
if ((probalkozas < 10)&&(johelyen == 4))
{
    printf("Nyertél!! Felkerültél a dicsőségtáblára! A feladatot ", probalkozas, " lépésből oldottad meg!\n\n");
    printf("A neved:  ");
    scanf("%s", &username);
//    dicsosegtablabairas(username,probalkozas);
}
// / ha nyer az illető

// ha veszít az illető
else{
    printf("Sajnos ez most nem sikerült.\n");
    printf("Enter gomb lenyomásával vissza tudsz térni a főmenübe.");

    if (getchar() == '\n')
    {menu();}
    else {printf("Az [Entert] kellett volna te jóképességű... Na mindegy.");}
}

// /ha veszít az illető

int dicsosegtablabairas()
{
int username;
int probalkozas;
    /*fájl megnyitása
    utolsó sor megkeresése
    az eredmény beírása a végére
    rendezés függvény meghívása
    a fájl képernyőre írása.*/
    return 43;

}
}
int main()
{
    clearscreen();
    menu();
    //return 0;
}


