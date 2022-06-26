#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void gotoxy(int x,int y)
{
	COORD CRD;
    CRD.X = x;
    CRD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}
int main(void)
{
    system("color 74");
    int num_of_games,player_wins,cpu_wins,rand_num;
    char player_choice,cpu_choice,start;
    gotoxy(40,1);
    printf("---------------------\n");
    gotoxy(40,2);
    printf("|ROCK PAPER SCISCOR |\n");
    gotoxy(40,3);
    printf("---------------------\n");
    do
    {
        srand(time(0));
        cpu_wins = 0;
        player_wins = 0;
        rand_num = rand()%3 + 1;
        switch(rand_num)
        {
        case 1:
            cpu_choice = 'r';
            break;
        case 2:
            cpu_choice = 'p';
            break;
        case 3:
            cpu_choice = 's';
            break;
        default:
            break;
        }
        printf("How many games you want to play : ");
        scanf("%d",&num_of_games);
        for(int i = 1; i <= num_of_games; i++)
        {
            printf("\nGame no %d:\n",i);
            getchar();
            printf("Enter your choice(r/p/s) : ");
            scanf("%c",&player_choice);
            if(player_choice == cpu_choice)
            {
                if(player_choice == 'r')
                    printf("Both player and CPU chose Rock");
                if(player_choice == 'p')
                    printf("Both player and CPU chose Paper");
                if(player_choice == 's')
                    printf("Both player and CPU chose Scissor");
                printf("\nIt's a Tie");
            }
            if(player_choice == 'r')
            {
                if(cpu_choice == 'p')
                {
                    printf("Player chooses Rock\nCPU chooses Paper");
                    printf("\nCPU Wins");
                    cpu_wins += 1;
                }
                if(cpu_choice == 's')
                {
                    printf("Player chooses Rock\nCPU chooses Scissor");
                    printf("\nPlayer Wins");
                    player_wins += 1;
                }
            }
            if(player_choice == 'p')
            {
                if(cpu_choice == 'r')
                {
                    printf("Player chooses Paper\nCPU chooses Rock");
                    printf("\nPlayer Wins");
                    player_wins += 1;
                }
                if(cpu_choice == 's')
                {
                    printf("Player chooses Paper\nCPU chooses Scissor");
                    printf("\nCPU Wins");
                    cpu_wins += 1;
                }
            }
            if(player_choice == 's')
            {
                if(cpu_choice == 'r')
                {
                    printf("Player chooses Scissor\nCPU chooses Rock");
                    printf("\nCPU Wins");
                    cpu_wins += 1;
                }
                if(cpu_choice == 'p')
                {
                    printf("Player chooses Scissor\nCPU chooses Paper");
                    printf("\nPlayer Wins");
                    player_wins += 1;
                }
            }
        }
        printf("\nChecking the results ");
        for(int i = 1; i <= 4; i++)
        {
            printf(". ");
            Sleep(500);
        }
        printf("\nCPU Wins = %d\t\tPlayer Wins = %d",cpu_wins,player_wins);
        if(player_wins > cpu_wins)
        {
            printf("\nPlayer Wins this match :)\n");
        }
        else if(player_wins < cpu_wins)
        {
            printf("\nCPU Wins this match, Better luck next time\n");
        }
        else
        {
            printf("\nIts a DRAW !!!\n");
        }
        getchar();
        printf("\nPlay another game ?(y/n): ");
        scanf("%c",&start);
    }
    while(start == 'y');
    printf("Thanks for Playing :)");
}
