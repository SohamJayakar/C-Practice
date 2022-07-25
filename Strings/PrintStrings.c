# include<stdio.h>

int main()
{
    char str[] = "Soham";
    char *ptr = str;
    char str2[50];
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n%s\n",str);

    printf("Enter your name: \n");
    scanf("%s",str2);
    printf("Your name is %s", str2);
    return 0;
}