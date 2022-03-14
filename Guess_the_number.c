#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,nguess;
    int gnumber;
    char choice;
    do
    {
        nguess=1;
        srand(time(0));
        number=rand()%100 + 1;
        do
        {
            printf("\nGuess the number between 1 and 100:");
            scanf("%d",&gnumber);
            if(gnumber>number)
            {
                printf("Lower your number\n");
            }
            else
            {
                if(gnumber<number)
                {
                    printf("increase your number\n");
                }
                else
                {
                    printf("You have guessed the correct number in %d attempts !!!\n",nguess);
                }
            }
            nguess++;
        }
        while(gnumber!=number);
        getchar();
        printf("\nPlay Again( Enter y for yes an n for no):");
        scanf("%c",&choice);
    }
    while(choice=='y');
    return 0;
}
