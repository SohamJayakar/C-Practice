# include<stdio.h>

void fib(int x)
{
    static int a = 0,b = 1,c;
    if(x > 0)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
        fib(x-1);
    }
}
int main()
{
    int x, a = 0, b = 1;
    printf("Enter the place value of sequence\n");
    scanf("%d",&x);
    printf("%d %d ",a,b);
    fib(x - 2);
    return 0;
}