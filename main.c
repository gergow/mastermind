#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    clearscreen();
    menu();
    //return 0;
}


clearscreen()
{
  const char* CLEAR_SCREE_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO,CLEAR_SCREE_ANSI,12);
}

int menu ()
{
    int menuinput = 0;
    int chooseokay = 0;

    printf("### Mastermind ###\n\n");
    printf("Please choose from this menu:\n\n");
    printf("[1] Start a new game\n[2] Best scores\n[3] Load game\n[4] Exit");

    while (chooseokay =0)
    {
        scanf("%d", &menuinput);
            if(menuinput > 4){
                printf("A menüben megadott számok közül tudsz csak választani. Ha már itt elakadsz, mi lesz a játékkal?");
                chooseokay = 0;
            }
            else {chooseokay = 1;}
    }

 /*   switch (menuinput)
    {
        case '1':
            newgame();
            break;
        case '2':
            bestscores();
            break;
        case '3':
            loadgame();
            break;
//        case '4':
//             Application.Exit();
    }*/

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
int array[2][4] = {a,b,c,d}, {va,va,vc,vd}; // a tömb első sora a 'gondolt' változók, a  második sora, hogy volt-e már beszámítva a 'vanebenne' értékbe, vagy sem.

    printf("Indulhat a játék, adj meg 4 egész számot 0-9ig, majd üss entert. 10 próbálkozásod van.\n\n");


    scanf("%d", &input);

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








