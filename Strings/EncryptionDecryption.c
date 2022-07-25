# include<stdio.h>
void encrypt(char *ch)
{
    char *ptr = ch;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        *ptr++;
    }
    
}
void decrypt(char *ch)
{
    char *ptr = ch;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}
int main()
{
    char ch[] = "Come to this room";
    printf("Before encryption the string is %s\n",ch);
    encrypt(ch);
    printf("After encryption the string is %s\n",ch);
    decrypt(ch);
    printf("After decryption the string is %s\n",ch);
    return 0;
}