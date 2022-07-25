# include<stdio.h>

float conv(int x)
{
    return (float)(x * 9 / 5) + 32;
}
int main()
{
    int x;
    printf("Enter the Temperature in Celsius\n");
    scanf("%d",&x);
    printf("The value in Fahrenheit is %f F",conv(x));
    return 0;
}