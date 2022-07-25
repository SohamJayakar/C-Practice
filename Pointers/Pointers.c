# include<stdio.h>
int main()
{
    int i = 2;
    int *j = &i;
    int **k = &j;

    printf("%d\n", i);
    printf("%u\n",*j);
    printf("%u\n",&i);
    printf("%u\n",&j);
    printf("%u\n",*(&j));
    printf("%u\n",*(&k));
    return 0;
}