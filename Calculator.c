#include<stdio.h>
#include<math.h>
int fact(int x);
void main()
{
    double a,b;
    char fun,choice;
    printf("THIS IS A SIMPLE CALCULATOR DEVELOPED BY ANEESH SHARMA AND CUURRENTLY IT SUPPORTS SEVEN FUNCTIONS\n");
    do
    {
    printf("\nEnter the first number:");
    scanf("%lf",&a);
    getchar();
    printf("Enter the function(+,-,*,/,^[power],![factorial],s[square root]:");
    scanf("%c",&fun);
    if(fun=='+' || fun=='-' || fun=='*' || fun=='/' || fun=='!' || fun=='s' || fun=='^')
    {
    if(fun=='!' || fun=='s')
    {
        if(fun=='!')
        {
            int f=fact(a);
            printf("%d!=%d",(int)a,(int)f);
        }
        else
        {
            double sr=sqrt(a);
            printf("sqrt(%.3lf)=%.3lf",a,sr);
        }
    }
    else
    {
    printf("Enter the second number:");
    scanf("%lf",&b);
    printf("\n");
    switch(fun)
    {
    case '+':
        printf("%.3lf+%.3lf=%.3lf",a,b,a+b);
        break;
    case '-':
        printf("%.3lf-%.3lf=%.3lf",a,b,a-b);
        break;
    case '*':
        printf("%.3lf*%.3lf=%.3lf",a,b,a*b);
        break;
    case '/':
        if(b==0)
        {
            printf("Division with zero !!!");
        }
        else
        {
            printf("%.3lf/%.3lf=%.3lf",a,b,a/b);
        }
        break;
    case '^':
        printf("(%.3lf)^%.3lf=%.3lf",a,b,pow(a,b));
        break;
    default:
        printf("\nWrong input !!!");
    }
    }
    }
    else
    {
        printf("Wrong input !!!");
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
