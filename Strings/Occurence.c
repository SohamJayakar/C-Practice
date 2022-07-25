# include<stdio.h>

int occur(char *ch,char c)
{
    char *ptr = ch;
    int count = 0;
    while(*ptr != '\0')
    {
        if(*ptr ==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char ch[] = "AkshayKumar567899";
    int a = occur(ch,'a');
    printf("Occurence = %d",a);
    return 0;
}