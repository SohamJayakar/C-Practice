# include<stdio.h>

int strlen1(char  *str)
{
    char *ptr = str;
    int len = 0;
    while(*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char str[] = "Soham";
    int l = strlen1(str);

    printf("The length of the string is %d",l);
    return 0;
}