# include<stdio.h>
# include<math.h>

/*int area(int a)
{
    return (a*a);
}*/
int main()
{
    int a;
    printf("The side length of sqaure is ");
    scanf("%d",&a);
    //printf("The area of square is %d\n",area(a));
    printf("The area of square is %d\n",(int)pow(a,2));
    return 0;
}