# include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Soham3.txt","r");
    char c = fgetc(ptr);

    while(c != EOF)
    {
        printf("%c",c);
        c = fgetc(ptr);
    }
    return 0;
}