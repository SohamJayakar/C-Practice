# include<stdio.h>

int main()
{
    int n, prime = 1;
    //n = 46;
    printf("Enter your Number\n");
    scanf("%d",&n);
    for(int i = 2; i <n; i++)
    {
        if(n%i == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime == 0 && n!=2)
    {
        printf("The number is not prime number");
    }
    else
    {
        printf("The number is prime number");
    }
    return 0;
}