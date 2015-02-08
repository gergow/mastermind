#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

    printf("Hello world!\n");
    clearScreen();
    menu();
    //return 0;
}


clearScreen()
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


