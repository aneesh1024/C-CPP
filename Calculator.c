#include<stdio.h>
int fact(int x);
int main()
{
    float a,b;
    char fun,choice;
    printf("THIS IS A SIMPLE CALCULATOR DEVELOPED BY ANEESH SHARMA AND CUURRENTLY IT SUPPORTS FIVE FUNCTIONS\n");
    do
    {
    printf("\nEnter the first number:");
    scanf("%f",&a);
    getchar();
    printf("Enter the function(+,-,*,/,!):");
    scanf("%c",&fun);
    if(fun=='!')
    {
         int f=fact(a);
         printf("%d!=%d",(int)a,(int)f);
    }
    else
    {
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("\n");
    switch(fun)
    {
    case '+':
        printf("%f+%f=%f",a,b,a+b);
        break;
    case '-':
        printf("%f-%f=%f",a,b,a-b);
        break;
    case '*':
        printf("%f*%f=%f",a,b,a*b);
        break;
    case '/':
        if(b==0)
        {
            printf("Division with zero !!!");
        }
        else
        {
            printf("%f/%f=%f",a,b,a/b);
        }
        break;
    default:
        printf("\nWrong input !!!");
    }
    }
    getchar();
    printf("\n\nDo yo want to calculate again(Enter y for yes and n for no):");
    scanf("%c",&choice);
    }while(choice=='y');

}
int fact(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}

