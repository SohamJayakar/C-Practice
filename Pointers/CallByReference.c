# include<stdio.h>

void wrongSwap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 4, b = 3;
    printf("The value of a and b before swap is %d and %d\n", a,b);
    wrongSwap(a,b);//will not work since its call by value.
    printf("The value of a and b after swap is %d and %d\n", a,b);
    swap(&a,&b);//worked due to call by reference.
    printf("The value of a and b after swap is %d and %d\n", a,b);
    return 0;
}