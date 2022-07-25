# include<stdio.h>

int main()
{
    FILE *ptr;
    char name[50],name1[50];
    int salary,salary2;

    printf("Enter your employee name1 and salary1\n");
    scanf("%s",&name);
    scanf("%d",&salary);

    printf("Enter your employee name2 and salary2\n");
    scanf("%s",&name1);
    scanf("%d",&salary2);

    //ptr = fopen("a.csv","w");
    ptr = fopen("a.txt","w");

    fprintf(ptr,"%s, %d\n",name,salary);
    fprintf(ptr,"%s, %d\n",name1,salary2);
    
    fclose(ptr);
    return 0;
}