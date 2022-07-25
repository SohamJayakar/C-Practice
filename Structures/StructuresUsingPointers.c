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
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 101; // or can use ptr->code = 101;
    printf("The code of employee e1 is %d",(*ptr).code);
    return 0;
}