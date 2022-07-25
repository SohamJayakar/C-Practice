# include<stdio.h>

int main()
{
    FILE *ptr;
    int num = 45;
    ptr = fopen("Soham2.txt","w");
    fprintf(ptr,"The number is %d",num);
    fclose(ptr);
    return 0;
}