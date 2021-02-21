/* A program to print details of five employees using structure.
         Written by: Kundan Prasad
*/

#include<stdio.h>
#include<string.h>

struct employ
{
    char name[20];
    char id[20];
    char exp[2];
    char salary[10];
};

int main()
{
// Local Declarations
    struct employ e[5];
    int i;
// Loop for entering names
    for(i=0;i<5;i++)
    {
        printf("Enter the employ %d name:\n",i+1);
        scanf("%s",&e[i].name);
    }
// Loop for entering id's
    for(i=0;i<5;i++)
    {
         printf("Enter the employ %d ID:\n",i+1);
        scanf("%s",&e[i].id);
    }
// Loop for entering experiences
    for(i=0;i<5;i++)
    {
        printf("Enter the employ %d experience in years:\n",i+1);
        scanf("%s",&e[i].exp);
    }
// Loop for entering salary
    for(i=0;i<5;i++)
    {
        printf("Enter the employ %d salary in rupees:\n",i+1);
        scanf("%s",&e[i].salary);
    }
// Printing the details of employees
    for(i=0;i<5;i++)
    {
        printf("Name = %s,ID = %s,Experience = %s,Salary = %s",e[i].name,e[i].id,e[i].exp,e[i].salary);
        printf("\n");
    }

return 0;
} //main
