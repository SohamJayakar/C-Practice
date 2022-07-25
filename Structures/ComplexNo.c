# include<stdio.h>

typedef struct complex
{
    int real;
    int img;
} comp;

void display(comp c)
{
    printf("The value of complex number is %d + i(%d)\n",c.real,c.img);
}

int main()
{
    comp cnum[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value of %d number\n",i+1);
        scanf("%d",&cnum[i].real);
        printf("Enter the imaginary value of %d number\n",i+1);
        scanf("%d",&cnum[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnum[i]);
    }

    return 0;
    
}