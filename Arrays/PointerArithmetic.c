# include<stdio.h>

int main()
{
    int i,j;
    int *ptr = &i;
    int *ptr2 = &j;
    printf("%u\n",ptr);
    ptr+=1;
    printf("%u\n",ptr);
    printf("%u\n",ptr2);
    if(ptr2>ptr)
    {
        printf("The value of address of ptr2 is greater than ptr\n");
    }
    else if(ptr2<ptr)
    {
        printf("The value of address of ptr2 is less than ptr\n");
    }
    else
    {
        printf("The value of address of ptr2 is equal to ptr\n");
    }
    printf("ptr - ptr2 = %u\n", ptr - ptr2);
    return 0;
}