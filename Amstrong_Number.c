#include<stdio.h>
#include<math.h>
int digit_cal(float x);
void amstrong(int num);
int main(void)
{
    int i,k, num, arr[100];
    printf("Enter a number : ");
    scanf("%d",&num);
    amstrong(num);
}
void amstrong(int num)
{
    int arr[100], i, k, n;
    for(i = 0; i < digit_cal(num); i++)
    {
        n = num;
        n = n%(int)(pow(10,i+1));
        arr[i] = n/(pow(10,i));
    }
    int lhs = 0; //lhs = sum of digit numbers raised to power number of digit
    for(int k = 0; k < digit_cal(num); k++)
    {
        lhs = lhs + (int)pow(arr[k],digit_cal(num));
        printf("%d^%d + ",arr[k],digit_cal(num));
    }

    printf(" == %d",lhs);
    if(lhs == num)
    {
        printf("\nThe number %d is an armstrong number",num);
    }
    else{
        printf("\nThe number %d is NOT an armstrong number",num);
    }
}
int digit_cal(float x)
{
    int digit_count;
    for(digit_count = 0; digit_count < 100; digit_count++)
    {
        if(x > 1)
        {
            x = x/10;
        }
        else{
            break;
        }
    }
    return digit_count;
}
