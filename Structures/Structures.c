# include<stdio.h>
# include<string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};


int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.45;
    strcpy(e1.name,"Soham");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}