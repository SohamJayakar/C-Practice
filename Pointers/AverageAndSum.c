# include<stdio.h>

void sumAndAverage(int a,int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

int main()
{
    int i = 6,j = 9,sum;
    float avg;

    sumAndAverage(i, j, &sum, &avg);
    printf("The value of sum of two numbers is %d\n",sum);
    printf("The value of avg of two numbers is %f\n",avg);
    return 0;
}