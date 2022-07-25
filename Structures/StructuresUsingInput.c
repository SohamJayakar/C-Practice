# include<stdio.h>

struct employee 
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct employee e1,e2,e3;

    printf("Enter the code of employee e1\n");
    scanf("%d",&e1.code);
    printf("Enter the salary of employee e1\n");
    scanf("%f",&e1.salary);
    printf("Enter the name of employee e1\n");
    scanf("%s",e1.name);

    printf("Enter the code of employee e2\n");
    scanf("%d",&e2.code);
    printf("Enter the salary of employee e2\n");
    scanf("%f",&e2.salary);
    printf("Enter the name of employee e2\n");
    scanf("%s",e2.name);

    printf("Enter the code of employee e3\n");
    scanf("%d",&e3.code);
    printf("Enter the salary of employee e3\n");
    scanf("%f",&e3.salary);
    printf("Enter the name of employee e3\n");
    scanf("%s",e3.name);

    printf("*******************************************************************\n\n");

    printf("The code of employee e1 is %d\n",e1.code);
    printf("The salary of employee e1 is %f\n",e1.salary);
    printf("The name of employee e1 is %s\n",e1.name);

    printf("The code of employee e2 is %d\n",e2.code);
    printf("The salary of employee e2 is %f\n",e2.salary);
    printf("The name of employee e2 is %s\n",e2.name);

    printf("The code of employee e3 is %d\n",e3.code);
    printf("The salary of employee e3 is %f\n",e3.salary);
    printf("The name of employee e3 is %s\n",e3.name);

    return 0;
}