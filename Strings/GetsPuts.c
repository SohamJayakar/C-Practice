# include<stdio.h>

int main()
{
    char st[50];
    printf("Whats your name?");
    gets(st);
    printf("Your name is %s", st);
    puts(st);
    return 0;
}