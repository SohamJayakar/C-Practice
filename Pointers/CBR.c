# include<stdio.h>

int multiply(int *a)
{
    return 10*(*a);
}
int multiply2(int a)
{
    return 10*a;
}

int main()
{
    int a = 4;
    printf("%d\n",multiply(&a));
    printf("%d\n",multiply2(a));
    return 0;
}