# include<stdio.h>

int table(int *arr,int num,int n)
{
    printf("The multiplication table of %d is \n",num);
    for (int i = 0; i < n; i++)
    {
        arr[i] = num * (i+1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n",num,i+1,arr[i]);
    }
    printf("*************************************************************\n\n");
    
}

int main()
{
    int i,num;
    int arr[i][10];
    printf("Enter the number of multiplication table you want to print\n");
    scanf("%d",&i);
    for(int j = 0; j<i; j++)
    {
        printf("You want the table of\n");
        scanf("%d",&num);
        table(arr[j],num,10);
    }
    return 0;
}