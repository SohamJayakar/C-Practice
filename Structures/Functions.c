# include<stdio.h>
# include<string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

void show(struct employee e1)
{
    printf("The code of employee e1 is %d\n",e1.code);
    printf("The name of employee e1 is %s\n",e1.name);
    printf("The salary of employee e1 is %.1f\n",e1.salary);
}

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    //(*ptr).code = 101; // or can use ptr->code = 101;

    ptr->code = 101;
    ptr->salary = 3078.5;
    strcpy(ptr->name,"Soham");
    show(e1);
    return 0;
}