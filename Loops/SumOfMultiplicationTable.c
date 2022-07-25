# include<stdio.h>

int main(){
    int i = 0, sum = 0, n;
    printf("The value of n is\n");
    scanf("%d", &n);

    do
    {
        sum += 8*i;
        i++;
    }
    while(i<=n);

    printf("The sum of multiplication table of 8 is %d", sum);

    return 0;
}