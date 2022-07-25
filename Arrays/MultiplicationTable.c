# include<stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("Enter the number you want the multipication table of:\n");
    scanf("%d",&n);
    for(int i = 0; i<10; i++)
    {
        arr[i] = n*(i+1);
    }
    printf("The multiplication table of %d is \n", n);
    for (int j = 0; j < 10; j++)
    {
        printf("%d x %d = %d\n",n,j+1,arr[j]);
    }
    return 0;
    
}