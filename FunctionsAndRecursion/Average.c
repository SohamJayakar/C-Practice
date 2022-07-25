# include<stdio.h>

float average(int a, int b, int c)
{
    return (float)(a+b+c)/3;
}
int main()
{
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);
    printf("%f",average(a,b,c));
    return 0;
}