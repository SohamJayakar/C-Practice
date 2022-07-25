# include<stdio.h>

void slice(char *ch,int m, int n)
{
    int i = 0;
    while((m+i)<n)
    {
        ch[i] = ch[m+i];
        i++;
    }
    ch[i] = '\0';
}

int main()
{
    char ch[] = "SohamJayakar";

    slice(ch,1,6);
    printf("%s",ch);
    return 0;
}