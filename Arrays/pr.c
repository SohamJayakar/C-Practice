# include<stdio.h>

int main()
{
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;
    if(ptr = &arr[2])
    {
        printf("These are in the same location.\n");
    }
    else
    {
        printf("These are not in the same location.\n");
    }
    return 0;
}