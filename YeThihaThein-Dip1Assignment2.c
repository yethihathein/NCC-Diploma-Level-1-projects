
//This is NCC diploma level 1, assignment 2 by Ye Thiha Thein.
//raythihathein@gmail.com


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //my program is showing error which is concerned with "true" declaration, so I google it and told me to add this.
int main() {

    int p1point=0, p2point=0, lap=1;
    char p1choice, p2choice, toQuit, mainmenu;
    char option[4] = {'x','r','p','s'};
    char p1name[6] ;

    printf("\n| ROCK vs PAPER vs SCISSOR |  v 1.1");
    printf("\ndeveloped by 'Ya Kout'");
    printf("\nLOADING .................\n");

    while(true){
        printf("\n< Enter '1' : Read Rules >\n");
        printf("< Enter '2' : Play Game  >\n");
        printf("< Enter '3' : Exit Game  >\n |-->");
        scanf(" %c",&mainmenu);

        if(mainmenu=='1'){                                                                                                //mainmenu1
            printf("\nTwo players have to play five rounds.\n");
            printf("While one player is choosing his/her option, the other one must not watch.\n");
            printf(">>>>>>>>>>>> Winning concept <<<<<<<<<<<<<<<\n");
            printf("                  wins\n");
            printf("   <-----------------------------------\n");
            printf("  /                                    |\n");
            printf("Rock ----------> Scissor ----------> Paper\n");
            printf("         wins               wins\n\n");
            printf("____________________________________________________");
            printf("____________________________________________________\n");
        }
        else if(mainmenu=='2'){                                                                                         //mainmenu2

            printf("\nGAME STARTED");
            while(true){
                printf("\n< Enter 'r' for rock    > \n< Enter 'p' for paper   > \n< Enter 's' for scissor >\n\n");
                printf("Player One Turn:\n[r] or [p] or [s]? |-->");
                scanf(" %c",&p1choice);
                printf("Player Two Turn:\n[r] or [p] or [s]? |-->");
                scanf(" %c",&p2choice);

                while((p1choice==option[1] || p1choice==option[2] || p1choice==option[3]) && (p2choice==option[1] || p2choice==option[2] || p2choice==option[3]) && (lap <= 5)){

                    printf("\n                    In round %d,\n",lap);
                    if(p1choice == p2choice){
                        printf("                  Draw with %c vs %c",p1choice,p2choice);
                    }
                    else if((p1choice=='r' && p2choice=='s') || (p1choice=='p' && p2choice=='r') || (p1choice=='s' && p2choice=='p')){
                        printf("                  (P1 is %c) vs (P2 is %c). P1 won",p1choice,p2choice);
                        p1point += 1;
                    }
                    else{
                        printf("                  (P1 is %c) vs (P2 is %c). P2 won",p1choice,p2choice);
                        p2point += 1;
                    }
                    printf("\n##############################################\n");
                    if(lap==5){
                        break;
                    }
                    printf("\nPlayer One Turn:\n[r] or [p] or [s]? |-->");
                    scanf(" %c",&p1choice);
                    printf("Player Two Turn:\n[r] or [p] or [s]? |-->");
                    scanf(" %c",&p2choice);
                    lap += 1;
                }
                if(lap == 5){
                    printf("\n|P1 : P2|");
                    printf("\n| %d : %d |",p1point,p2point);
                    if(p1point > p2point){
                        printf("\nP1 won the game.");
                    }
                    else if(p1point == p2point){
                        printf("\nThe game is draw.");
                    }
                    else {
                        printf("\nP2 won the game.");
                    }
                    printf("\nGAME OVER");
                    while(true){
                        printf("\nPlay again? y/n :");
                        scanf(" %c",&toQuit);
                        if(toQuit=='y'){
                            lap=1;
                            p1point=0;
                            p2point=0;
                            break;
                        }
                        else if(toQuit=='n'){
                            printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~EXIT~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            exit(0);
                        }
                        else{
                            printf("Type only y or n!!!\n");
                        }
                    }
                }
            }
        }
        else if(mainmenu=='3'){                                                                                           //mainmenu3
            break;
        }
        else{
            printf("\nPlease enter just '1' or '2' or '3'!!!");
        }
    }

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~EXIT~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    return 0;
}

