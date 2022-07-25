# include<stdio.h>

int sum(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x + sum(x-1);
    }
    
}
int main()
{
    printf("%d", sum(10));
    return 0;
}