#include<stdio.h>
#include<windows.h>
#include<conio.h>
struct Students
{
    char name[50];
    int age;
    char course[50];
    char branch[50];
};
int main(void)
{
    system("color 0a");
    int num_stud,choice,stud_registered = 0;
    char exit;
    printf("\t\t\t\t\t\t ---------------------------\n");
    printf("\t\t\t\t\t\t |Student Management System|\n");
    printf("\t\t\t\t\t\t ---------------------------\n");
    struct Students std[100];
    do
    {

        printf("Enter 1 for adding Students OR enter 2 for viewing Students : ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            while(choice == 1)
            {
                printf("How many students you want to add : ");
                scanf("%d",&num_stud);
                for(int i = stud_registered; i < stud_registered+num_stud; i++)
                {
                    printf("\n\nEnter details of student %d :-\n",i+1);
                    printf("\nEnter the Students name : ");
                    scanf("%s",&std[i].name);
                    printf("\nEnter the Students age : ");
                    scanf("%s",&std[i].age);
                    printf("\nEnter the course enrolled by the student : ");
                    scanf("%s",&std[i].course);
                    printf("\nEnter the branch : ");
                    scanf("%s",&std[i].branch);
                }
                stud_registered = num_stud + stud_registered;
                printf("Enter 1 to add more students or 2 to print informations of the students : ");
                scanf("%d",&choice);
            }
        }
        if(choice == 2)
        {
            for(int i = 0; i < stud_registered; i++)
            {
                printf("\nStudent %d",i+1);
                printf("\nName : %s",std[i].name);
                printf("\nAge : %d",std[i].age);
                printf("\nName : %s",std[i].course);
                printf("\nName : %s\n",std[i].branch);
            }
        }
        getchar();
        printf("Exit ?(y/n) : ");
        scanf("%c",&exit);
    }
    while(exit == 'n');
}
