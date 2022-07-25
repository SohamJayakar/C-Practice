# include<stdio.h>
# include<string.h>

int main()
{
    char *str = "Soham";
    char source[] = "Akshay";
    char target[50];
    int a = strlen(str);
    printf("The length of the string is %d\n",a);
    strcpy(target,source);
    printf("The value of target is %s",target);
    return 0;
}