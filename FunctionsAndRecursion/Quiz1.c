# include<stdio.h>

void GoodMorning()
{
    printf("Good Morning\n");
}

void GoodAfternoon()
{
    printf("Good Afternoon\n");
}

void GoodNight()
{
    printf("Good Night\n");
}

int sum(int a, int b)
{
    return (a+b);
}

int main()
{
    int c;
    GoodMorning();
    GoodAfternoon();
    GoodNight();
    printf("%d",sum(7,5));

    return 0;
}